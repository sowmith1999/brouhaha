#include <cstdint>
#include <functional>
#include <iostream>
#include <string>
#include <sstream>

// GMP and gc headers
#include "gc.h"
#include "gc_cpp.h"
#include "gmp.h"
#include "gmpxx.h"

// hamt headers
#include "hamt.h"

#define MASK(val) (((u64)(val)) & ~(7ULL))

#define NULL_VALUE 0
#define TRUE_VALUE 8
#define FALSE_VALUE 16
#define ENV_ARRAY 1
#define RANDOM_VALUE 63 // 00111111

// Making the choice not to use them because the intptr_t is available.
typedef uint64_t u64;
typedef int64_t s64;
typedef uint32_t u32;
typedef int32_t s32;

enum DataType
{
    SPL = 0x0,
    MPZ = 0x1,
    HASH = 0x2,
    STRING = 0x3,
    MPF = 0x4,
    CLO = 0x5,
    // ENV = 0x6,
    CONS = 0x7
};

struct hash_struct;
std::string print_val(void *val);
void *equal_(void *arg1, void *arg2);

#pragma region Types
// region Encoding and Decoding and Tags

void assert_type(bool cond, const char *msg)
{
    if (!cond)
    {
        std::cout << "type assertion failed-> " << msg << std ::endl;
        exit(1);
    }
}
// ??why encode and decode functions for every type, just have one and make it
// take a void* and the type we want the tag variable to returns a void* that is
// tagged

void *encode_mpz(mpz_t *val)
{
    return reinterpret_cast<void *>(((u64)val) | MPZ);
}

void *encode_mpf(mpf_t *val)
{
    return reinterpret_cast<void *>(((u64)val) | MPF);
}

void *encode_str(std::string *val)
{
    return reinterpret_cast<void *>(((u64)val) | STRING);
}

void *encode_clo(void **val)
{
    return reinterpret_cast<void *>(((u64)(val)) | CLO);
}

void *encode_bool(bool val)
{
    if (val)
    {
        return reinterpret_cast<void *>(TRUE_VALUE);
    }
    return reinterpret_cast<void *>(FALSE_VALUE);
}
void *encode_cons(void **val)
{
    return reinterpret_cast<void *>(((u64)(val)) | CONS);
}

void *encode_hash(const hamt<hash_struct, hash_struct> *val)
{
    return reinterpret_cast<void *>(((u64)(val)) | HASH);
}

void *encode_null() { return NULL_VALUE; }

// takes in a void * type and gets the tag, return it as an integer
int get_tag(void *val)
{
    u64 ptr = reinterpret_cast<u64>(val);
    return (ptr & 7);
}

bool is_cons(void *lst)
{
    if (get_tag(lst) == CONS)
    {
        return true;
    }
    return false;
}

// decode functions

mpz_t *decode_mpz(void *val)
{
    // MASK does the casting to u64
    assert_type((get_tag(val) == MPZ), "Type error: Not MPZ");
    return reinterpret_cast<mpz_t *>(MASK(val));
}
mpf_t *decode_mpf(void *val)
{
    // MASK does the casting to u64
    assert_type((get_tag(val) == MPF), "Type error: Not MPF");
    return reinterpret_cast<mpf_t *>(MASK(val));
}
std::string *decode_str(void *val)
{
    // MASK does the casting to u64
    assert_type((get_tag(val) == STRING), "Type error: Not STRING");
    return reinterpret_cast<std::string *>(MASK(val));
}
bool decode_bool(void *val)
{
    // MASK does the casting to u64
    assert_type(((get_tag(val)) == SPL), "Type error : Not BOOLEAN");
    u64 temp = (u64)val;
    if (temp == TRUE_VALUE)
    {
        return true;
    }
    else if (temp == FALSE_VALUE)
    {
        return false;
    }
    else
    {
        assert_type(false, "Type error : Not BOOLEAN");
    }
    return false;
}
void **decode_cons(void *val)
{
    assert_type((get_tag(val) == CONS), "Type error: Not CONS");
    return reinterpret_cast<void **>(MASK(val));
}
void **decode_clo(void *val)
{
    assert_type((get_tag(val) == CLO), "Type error: Not CLO");
    return reinterpret_cast<void **>(MASK(val));
}
const hamt<hash_struct, hash_struct> *decode_hash(void *val)
{
    assert_type((get_tag(val) == HASH), "Type error: Not HASH");
    return reinterpret_cast<const hamt<hash_struct, hash_struct> *>(MASK(val));
}

// Closure Allocation, alloc_clo
void **alloc_clo(void *(*fptr)(), int num)
{
    void **obj = (void **)(GC_MALLOC((num + 1) * sizeof(void *)));

    obj[0] = reinterpret_cast<void *>(fptr);

    return obj;
}

#pragma endregion

#pragma region ArithOpFunctions

bool is_true(void *val)
{
    return decode_bool(val);
}

#pragma region EQUALITY

// this function assumes that both the args passed are mpz_t and doesn't perform a check
// tho decode_mpz when called by this function does the check.
void *mpz_equal(void *arg1, void *arg2)
{
    mpz_t *arg1_mpz = decode_mpz(arg1);
    mpz_t *arg2_mpz = decode_mpz(arg2);

    if (mpz_cmp(*arg1_mpz, *arg2_mpz) == 0)
    {
        return encode_bool(true);
    }
    return encode_bool(false);
}

void *mpf_equal(void *arg1, void *arg2)
{
    mpf_t *arg1_mpf = decode_mpf(arg1);
    mpf_t *arg2_mpf = decode_mpf(arg2);

    if (mpf_cmp(*arg1_mpf, *arg2_mpf) == 0)
    {
        return encode_bool(true);
    }
    return encode_bool(false);
}

void *str_equal(void *arg1, void *arg2)
{
    std::string *arg1_str = decode_str(arg1);
    std::string *arg2_str = decode_str(arg2);

    if (arg1_str->compare(*arg2_str) == 0)
    {
        return encode_bool(true);
    }
    return encode_bool(false);
}
void *spl_equal(void *arg1, void *arg2)
{
    // we don't care if the values are bools are nulls, we just care about
    // both the arguments have the same value, so we cast to u64 compare and return.
    u64 arg1_u64 = (u64)arg1;
    u64 arg2_u64 = (u64)arg2;

    if (arg1_u64 == arg2_u64)
    {
        return encode_bool(true);
    }
    return encode_bool(false);
}

void *cons_equal(void *arg1, void *arg2)
{
    // we have to get the cons_lst and go through each element and
    // call equal on each element and return false when one of equal calls
    // return false or return true once the cons is exhausted
    void **cons_arg1 = decode_cons(arg1);
    void **cons_arg2 = decode_cons(arg2);
    // looks wrong but we have exit conditions when the vals don't match or when the one/both cons enc
    while (true)
    {
        // comparing the car values of two cons using the equal function
        if (!equal_(cons_arg1[0], cons_arg2[0]))
        {
            return encode_bool(false);
        }
        // checking if both of the cdr are cons, if not comparing the cdr and returning
        if (!(get_tag(cons_arg1[1]) == CONS) && (get_tag(cons_arg2[1]) == CONS))
        {
            return encode_bool(equal_(cons_arg1[1], cons_arg2[1]));
        }
        cons_arg1 = decode_cons(cons_arg1[1]);
        cons_arg2 = decode_cons(cons_arg2[1]);
    }
}

void *equal_(void *arg1, void *arg2)
{
    // takes in two voids,
    // checks if they have the same tag, if not return false else
    // switches based on the tag to the appropriate function for the type
    int type_arg1 = get_tag(arg1);
    // checking the tags match
    if (!type_arg1 == (get_tag(arg2)))
    {
        return encode_bool(false);
    }
    switch (type_arg1)
    {
    case MPZ:
    {
        return mpz_equal(arg1, arg2);
        break;
    }
    case MPF:
    {
        return mpf_equal(arg1, arg2);
        break;
    }
    case STRING:
    {
        return str_equal(arg1, arg2);
        break;
    }
    case SPL:
    {
        return spl_equal(arg1, arg2);
        break;
    }
    case CONS:
    {
        return cons_equal(arg1, arg2);
        break;
    }
    default:
    {
        return encode_bool(false);
        break;
    }
    }
}

#pragma endregion

#pragma region HASHING

// these function assume the type passed is the expected one
// all the three hash function have a very similar structure
// get the the number of limbs/chars to process, and get the array pointer to them
// for loop over them to compute FNV1A and return the hash
u64 mpz_hash(void *val)
{
    u64 h = 0xcbf29ce484222325;
    mpz_t *mpz_val = decode_mpz(val);
    // the mpz_sgn is a macro in gmp that just looks at _mp_size for sign info
    int is_negative = mpz_sgn(*mpz_val); // < 0 if negative, = 0 if zero and > 0 if_positive
    u64 limb_cnt = mpz_size(*mpz_val);
    const mp_limb_t *limb_ptr = mpz_limbs_read(*mpz_val);
    if (is_negative < 0)
    {
        h = h ^ 0x00000000000000ff;
        h = h * 0x100000001b3;
    }
    else
    {
        h = h ^ 0x0000000000000000; // this doesn't do anything, not sure what to XOR it with for change
        h = h * 0x100000001b3;
    }

    for (u32 i = 0; i < limb_cnt; i++)
    {
        u64 limb = limb_ptr[i];
        for (u32 j = 0; j < 8; j++)
        {
            h = h ^ ((limb >> j * 8) & 0x00000000000000ff);
            h = h * 0x100000001b3;
        }
    }
    return h;
}

u64 mpf_hash(void *val)
{
    u64 h = 0xcbf29ce484222325;
    mpf_t *mpf_val = decode_mpf(val);
    u64 limb_cnt = mpf_size(*mpf_val);
    const mp_limb_t *limb_ptr = (*mpf_val)->_mp_d;
    int is_negative = mpf_sgn(*mpf_val);

    if (is_negative < 0)
    {
        h = h ^ 0x00000000000000ff;
        h = h * 0x100000001b3;
    }
    else
    {
        h = h ^ 0x0000000000000000; // this doesn't do anything, not sure what to XOR it with for change
        h = h * 0x100000001b3;
    }

    for (u32 i = 0; i < limb_cnt; i++)
    {
        u64 limb = limb_ptr[i];
        for (u32 j = 0; j < 8; j++)
        {
            h = h ^ ((limb >> j * 8) & 0x00000000000000ff);
            h = h * 0x100000001b3;
        }
    }

    return h;
}

u64 str_hash(void *val)
{
    std::string *str = decode_str(val);
    const u8 *data = reinterpret_cast<const u8 *>(str->data());
    int length = str->length();
    u64 h = 0xcbf29ce484222325;
    for (u32 i = 0; i < length; ++i && ++data)
    {
        h = h ^ *data;
        h = h * 0x100000001b3;
    }

    return h;
}

u64 hash_(void *val)
{
    switch (get_tag(val))
    {
    case MPZ:
    {
        return mpz_hash(val);
        break;
    }
    case MPF:
    {
        return mpf_hash(val);
        break;
    }
    case STRING:
    {
        return str_hash(val);
        break;
    }
    default:
    {
        assert_type(false, "type passed to hash_ cannot be hashed");
    }
    }
    return 0;
}

#pragma endregion

// ?? think about changes for supporting floats
void *prim_modulo(void *arg1, void *arg2)
{
    mpz_t *remainder = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*remainder);
    bool type_arg1 = get_tag(arg1) == MPZ;
    assert_type(type_arg1, "Argument 1 passed to prim_equal__u63 is not a MPZ");
    bool type_arg2 = get_tag(arg2) == MPZ;
    assert_type(type_arg2, "Argument 2 passed to prim_equal__u63 is not a MPZ");

    mpz_t *arg1_mpz = decode_mpz(arg1);
    mpz_t *arg2_mpz = decode_mpz(arg2);
    mpz_mod(*remainder, *arg1_mpz, *arg2_mpz);

    return encode_mpz(remainder);
}

void *prim_equal_u63(void *arg1, void *arg2)
{
    return equal_(arg1, arg2);
}

void *prim_eq_u63(void *arg1, void *arg2)
{
    return equal_(arg1, arg2);
}

// cons?
void *prim_cons_u63(void *lst)
{
    if (get_tag(lst) == CONS)
    {
        return encode_bool(true);
    }
    return encode_bool(false);
}

// null?
void *prim_null_u63(void *lst)
{
    if (lst == 0x0)
    {
        return encode_bool(true);
    }
    return encode_bool(false);
}

// casting functions
mpf_t *mpz_2_mpf(mpz_t *val)
{
    mpf_t *ret_val = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*ret_val);
    mpf_set_z(*ret_val, *val);
    return ret_val;
}

#pragma region Addition
void *add_mpz(void *arg1, void *arg2)
{
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    mpz_add(*result, *(decode_mpz(arg1)), *(decode_mpz(arg2)));
    return encode_mpz(result);
}

void *add_mpf(void *arg1, void *arg2)
{
    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);
    mpf_add(*result, *(decode_mpf(arg1)), *(decode_mpf(arg2)));
    return encode_mpf(result);
}
void *add_mpz_mpf(void *arg1, void *arg2) // return the mpf_t void*
{
    if (get_tag(arg1) == MPZ)
    { // arg1 is mpz, arg2 is mpf
        mpf_t *mpf_arg1 = mpz_2_mpf(decode_mpz(arg1));
        mpf_add(*mpf_arg1, *mpf_arg1, *(decode_mpf(arg2)));
        return encode_mpf(mpf_arg1);
    }
    mpf_t *mpf_arg2 = mpz_2_mpf(decode_mpz(arg2)); // arg1 is mpf and arg2 is mpz
    mpf_add(*mpf_arg2, *(decode_mpf(arg1)), *mpf_arg2);
    return encode_mpf(mpf_arg2);
}

// takes in two number?, gets the tags,  does the castings as required and adds them.
// the numbers could be mpz_t or mpf_t, if different, mpz_t gets casted to mpf_t
void *add(void *arg1, void *arg2)
{
    int arg1_tag = get_tag(arg1);
    int arg2_tag = get_tag(arg2);
    switch (arg1_tag == arg2_tag)
    {
    case true:
    {
        if (arg1_tag == MPZ)
        {
            return add_mpz(arg1, arg2);
        }
        else
        {
            return add_mpf(arg1, arg2);
        }
    }
    case false:
    {
        return add_mpz_mpf(arg1, arg2);
    }
    }
    return 0;
}

void *apply_prim__u43(void *lst) //+
{
    void *result = nullptr;

    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        int car_tag = get_tag(cons_lst[0]);
        bool type_check = (car_tag == MPZ) || (car_tag == MPF);

        assert_type(type_check, "Error in addition: values in the lst are not MPZ/MPF");

        if (!result)
        {
            result = cons_lst[0];
        }
        else
        {
            result = add(result, cons_lst[0]);
        }

        lst = cons_lst[1];
    }

    return result;
}

#pragma endregion

#pragma region Subtraction
void *sub_mpz(void *arg1, void *arg2)
{
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    mpz_sub(*result, *(decode_mpz(arg1)), *(decode_mpz(arg2)));
    return encode_mpz(result);
}

void *sub_mpf(void *arg1, void *arg2)
{
    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);
    mpf_sub(*result, *(decode_mpf(arg1)), *(decode_mpf(arg2)));
    return encode_mpf(result);
}

void *sub_mpz_mpf(void *arg1, void *arg2) // return the mpf_t void*
{
    if (get_tag(arg1) == MPZ)
    { // arg1 is mpz, arg2 is mpf
        mpf_t *mpf_arg1 = mpz_2_mpf(decode_mpz(arg1));
        mpf_sub(*mpf_arg1, *mpf_arg1, *(decode_mpf(arg2)));
        return encode_mpf(mpf_arg1);
    }
    mpf_t *mpf_arg2 = mpz_2_mpf(decode_mpz(arg2)); // arg1 is mpf and arg2 is mpz
    mpf_sub(*mpf_arg2, *(decode_mpf(arg1)), *mpf_arg2);
    return encode_mpf(mpf_arg2);
}

// takes in two number?, gets the tags,  does the castings as required and adds them.
// the numbers could be mpz_t or mpf_t, if different, mpz_t gets casted to mpf_t
void *sub(void *arg1, void *arg2)
{
    int arg1_tag = get_tag(arg1);
    int arg2_tag = get_tag(arg2);
    switch (arg1_tag == arg2_tag)
    {
    case true:
    {
        if (arg1_tag == MPZ)
        {
            return sub_mpz(arg1, arg2);
        }
        else
        {
            return sub_mpf(arg1, arg2);
        }
    }
    case false:
    {
        return sub_mpz_mpf(arg1, arg2);
    }
    }
    return 0;
}

void *apply_prim__u45(void *lst) //-
{
    void *result = nullptr;

    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        int car_tag = get_tag(cons_lst[0]);
        bool type_check = (car_tag == MPZ) || (car_tag == MPF);

        assert_type(type_check, "Error in subtraction: values in the lst are not MPZ/MPF");

        if (!result)
        {
            if (!is_cons(cons_lst))
            {
                // mpz_t* ret_val = (mpz)
                // ?? this has to be changed to return the - value of the car, as it is the only element
                result = cons_lst[0];
            }
            else
            {

                result = cons_lst[0];
            }
        }
        else
        {
            result = sub(result, cons_lst[0]);
        }

        lst = cons_lst[1];
    }

    return result;
}

#pragma endregion

#pragma region Multiplication
void *mul_mpz(void *arg1, void *arg2)
{
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    mpz_mul(*result, *(decode_mpz(arg1)), *(decode_mpz(arg2)));
    return encode_mpz(result);
}
void *mul_mpf(void *arg1, void *arg2)
{
    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);
    mpf_mul(*result, *(decode_mpf(arg1)), *(decode_mpf(arg2)));
    return encode_mpf(result);
}
void *mul_mpz_mpf(void *arg1, void *arg2) // return the mpf_t void*
{
    if (get_tag(arg1) == MPZ)
    { // arg1 is mpz, arg2 is mpf
        mpf_t *mpf_arg1 = mpz_2_mpf(decode_mpz(arg1));
        print_val(mpf_arg1);
        mpf_mul(*mpf_arg1, *mpf_arg1, *(decode_mpf(arg2)));
        return encode_mpf(mpf_arg1);
    }
    mpf_t *mpf_arg2 = mpz_2_mpf(decode_mpz(arg2)); // arg1 is mpf and arg2 is mpz
    mpf_mul(*mpf_arg2, *(decode_mpf(arg1)), *mpf_arg2);
    return encode_mpf(mpf_arg2);
}

// takes in two number?, gets the tags,  does the castings as required and adds them.
// the numbers could be mpz_t or mpf_t, if different, mpz_t gets casted to mpf_t
void *mul(void *arg1, void *arg2)
{
    int arg1_tag = get_tag(arg1);
    int arg2_tag = get_tag(arg2);
    switch (arg1_tag == arg2_tag)
    {
    case true:
    {
        if (arg1_tag == MPZ)
        {
            return mul_mpz(arg1, arg2);
        }
        else
        {
            return mul_mpf(arg1, arg2);
        }
    }
    case false:
    {
        return mul_mpz_mpf(arg1, arg2);
    }
    }
    return 0;
}

void *apply_prim__u42(void *lst) //*
{
    void *result = nullptr;

    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        int car_tag = get_tag(cons_lst[0]);
        bool type_check = (car_tag == MPZ) || (car_tag == MPF);

        assert_type(type_check, "Error in multiplication: values in the lst are not MPZ/MPF");
        if (!result)
        {
            result = cons_lst[0];
        }
        else
        {
            result = mul(result, cons_lst[0]);
        }

        lst = cons_lst[1];
    }

    return result;
}

#pragma endregion

#pragma region Division

void *div_mpz(void *arg1, void *arg2)
{
    mpz_t *result = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init(*result);
    mpz_div(*result, *(decode_mpz(arg1)), *(decode_mpz(arg2)));
    return encode_mpz(result);
}
void *div_mpf(void *arg1, void *arg2)
{
    mpf_t *result = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
    mpf_init(*result);
    mpf_div(*result, *(decode_mpf(arg1)), *(decode_mpf(arg2)));
    return encode_mpf(result);
}
void *div_mpz_mpf(void *arg1, void *arg2) // return the mpf_t void*
{
    if (get_tag(arg1) == MPZ)
    { // arg1 is mpz, arg2 is mpf
        mpf_t *mpf_arg1 = mpz_2_mpf(decode_mpz(arg1));
        print_val(mpf_arg1);
        mpf_div(*mpf_arg1, *mpf_arg1, *(decode_mpf(arg2)));
        return encode_mpf(mpf_arg1);
    }
    mpf_t *mpf_arg2 = mpz_2_mpf(decode_mpz(arg2)); // arg1 is mpf and arg2 is mpz
    mpf_div(*mpf_arg2, *(decode_mpf(arg1)), *mpf_arg2);
    return encode_mpf(mpf_arg2);
}

// takes in two number?, gets the tags,  does the castings as required and adds them.
// the numbers could be mpz_t or mpf_t, if different, mpz_t gets casted to mpf_t
void *div(void *arg1, void *arg2)
{
    int arg1_tag = get_tag(arg1);
    int arg2_tag = get_tag(arg2);
    switch (arg1_tag == arg2_tag)
    {
    case true:
    {
        if (arg1_tag == MPZ)
        {
            return div_mpz(arg1, arg2);
        }
        else
        {
            return div_mpf(arg1, arg2);
        }
    }
    case false:
    {
        return div_mpz_mpf(arg1, arg2);
    }
    }
    return 0;
}

void *apply_prim__u47(void *lst) // / division
{
    void *result = nullptr;

    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        int car_tag = get_tag(cons_lst[0]);
        bool type_check = (car_tag == MPZ) || (car_tag == MPF);

        assert_type(type_check, "Error in division: values in the lst are not MPZ/MPF");
        if (!result)
        {
            result = cons_lst[0];
        }
        else
        {
            result = div(result, cons_lst[0]);
        }

        lst = cons_lst[1];
    }

    return result;
}

#pragma endregion
void *apply_prim_and(void *lst)
{
    bool result = false;
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        // decoding a boolean run the required assertions, so directly decoding and assigninh

        if (decode_bool(cons_lst[0]))
        {
            lst = cons_lst[1];
            result = true;
            continue;
        }
        return encode_bool(false);
    }
    return encode_bool(result);
}
void *apply_prim_or(void *lst)
{
    bool result = false;
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        // decoding a boolean run the required assertions, so directly decoding and assigninh

        if (!decode_bool(cons_lst[0]))
        {
            lst = cons_lst[1];
            continue;
        }
        return encode_bool(true);
    }
    return encode_bool(result);
}

bool less_equal_zero(long cmp)
{
    if (cmp <= 0)
    {
        return true;
    }
    return false;
}

bool great_equal_zero(long cmp)
{
    if (cmp >= 0)
    {
        return true;
    }
    return false;
}

bool great_zero(long cmp)
{
    if (cmp > 0)
    {
        return true;
    }
    return false;
}

bool less_zero(long cmp)
{
    if (cmp < 0)
    {
        return true;
    }
    return false;
}

bool equal_zero(long cmp)
{
    if (cmp == 0)
    {
        return true;
    }
    return false;
}

void *compare_lst(void *lst, bool (*cmp_op)(long))
{
    int cmp_result = 0;
    long counter = 0;
    mpz_t *temp_store;
    mpz_init(*temp_store);
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        bool type_check = (get_tag(cons_lst[0]) == MPZ);

        assert_type(type_check,
                    "Error in apply_prim__u62: values in the lst are not MPT");
        mpz_t *opd1 = decode_mpz(cons_lst[0]);
        if (counter == 0)
        {
            mpz_set(*temp_store, *opd1);
            lst = cons_lst[1];
            counter++;
            continue;
        }

        cmp_result = mpz_cmp(*temp_store, *opd1);
        if (cmp_op(cmp_result))
        {
            mpz_set(*temp_store, *opd1);
            lst = cons_lst[1];
            counter++;
            continue;
        }
        return encode_bool(false);
    }
    if (counter <= 1)
    {
        assert_type(false, "Less than two numbers to compare in the list");
    }
    return encode_bool(true);
}

// Checks if the list is strictly decreasing
void *apply_prim__u62(void *lst) // >
{
    return compare_lst(lst, *great_zero);
}

// checks if a list is strictly increasing
void *apply_prim__u60(void *lst) // <
{
    return compare_lst(lst, *less_zero);
}

// checks if a list is equal
void *apply_prim__u61(void *lst) // =
{
    return compare_lst(lst, *equal_zero);
}

// checks if elements are decreasing >=
void *apply_prim__u62_u61(void *lst)
{
    return compare_lst(lst, *great_equal_zero);
}

// checks if elements are increasing <=
void *apply_prim__u60_u61(void *lst)
{
    return compare_lst(lst, *less_equal_zero);
}

#pragma endregion

#pragma region ConsMethods

static void *prim_cons(void *arg1, void *arg2)
{
    void **cell = (void **)GC_MALLOC(2 * sizeof(void *));
    cell[0] = arg1;
    cell[1] = arg2;
    return encode_cons(cell);
}

void *prim_car(void *val)
{
    assert_type((prim_cons_u63(val)), "not a cons cell");
    void **cell = decode_cons(val);
    return cell[0];
}

void *prim_cdr(void *val)
{
    assert_type((prim_cons_u63(val)), "not a cons cell");
    void **cell = decode_cons(val);
    return cell[1];
}

std::string print_cons(void *lst)
{
    std::string ret_str;
    ret_str.append("'(");
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        ret_str.append(print_val(cons_lst[0]));
        if (!is_cons(cons_lst[1]))
        {
            break;
        }
        ret_str.append(" ");
        lst = cons_lst[1];
    }
    ret_str.append(")");
    return ret_str;
}
#pragma endregion

#pragma region hash-prims

struct hash_struct
{
    void *val;

    hash_struct(void *arg)
    {
        this->val = arg;
    }

    u64 hash() const
    {
        return hash_(this->val);
    }

    bool operator==(const hash_struct &s) const
    {
        return decode_bool(equal_(this->val, s.val));
    }

    void print_hash_val() const
    {
        print_val(this->val);
    }
};

// std::string print_hash(void *lst)
// {
//     std::string ret_str;
//     ret_str.append("'#hash(");
//     while (is_cons(lst))
//     {
//         void **cons_lst = decode_cons(lst);
//         ret_str.append(print_val(cons_lst[0]));
//         if (!is_cons(cons_lst[1]))
//         {
//             break;
//         }
//         ret_str.append(" ");
//         lst = cons_lst[1];
//     }
//     ret_str.append(")");
//     return ret_str;
// }

// we'd atleast want to accept and work with strings and numbers
// but we will start with just numbers(mpz_t's)
// void *apply_prim_hash(void *lst) // generates a hash based on the k v pairs
// in the list
void *apply_prim_hash(void *lst)
{
    // For Keys : MPZ, MPF, STRING
    // For Values: Everything(void*)
    const hamt<hash_struct, hash_struct> *h = new ((hamt<hash_struct, hash_struct> *)GC_MALLOC(sizeof(hamt<hash_struct, hash_struct>))) hamt<hash_struct, hash_struct>();
    while (is_cons(lst))
    {
        void **cons_lst = decode_cons(lst);
        int elem_tag = get_tag(cons_lst[0]);
        bool type_check = (elem_tag == MPZ) || (elem_tag == MPF) || (elem_tag == STRING);

        if (!is_cons(cons_lst[1]))
        {
            assert_type(false, "Value isn't there");
        }
        void **cdr_cons_lst = decode_cons(cons_lst[1]);

        if (type_check)
        {
            const hash_struct *const k = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(cons_lst[0]);
            //?? hash_struct for value is not required, have to ask and remove.
            const hash_struct *const v = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(cdr_cons_lst[0]);
            h = h->insert(k, v);
            lst = cdr_cons_lst[1];
            continue;
        }
        assert_type(false, "Key is not one of MPZ or MPF or STRING");
    }
    return encode_hash(h);
}

void *prim_hash_u45ref(void *h, void *k)
{
    // check if h is a hash
    // check if k is an mpz
    // decode the hash and call hash-ref functions
    // return the key
    bool type_check_hash = get_tag(h) == HASH;
    if (!type_check_hash)
    {
        assert_type(false, "in the hash-ref function hash is not passed");
    }
    int elem_tag = get_tag(k);
    bool type_check_key = (elem_tag == MPZ) || (elem_tag == MPF) || (elem_tag == STRING);
    if (!type_check_key)
    {
        assert_type(false, "in the hash-ref function mpz_t/mpf_t/std::string is not passed");
    }
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
    const hash_struct *const key = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(k);
    const hash_struct *const t = h_hamt->get(key);
    if (t)
    {
        return t->val;
    }
    else
    {
        return NULL_VALUE;
    }
}

void *prim_hash_u45set(void *h, void *k, void *v)
{
    // check if h is hash
    // check if k, v are mpz's
    // check and update if there and create if new
    bool type_check_hash = get_tag(h) == HASH;
    if (!type_check_hash)
    {
        assert_type(false, "in the hash-set, hash is not passed");
    }
    int key_tag = get_tag(k);
    bool type_check_key = (key_tag == MPZ) || (key_tag == MPF) || (key_tag == STRING);
    if (!type_check_key)
    {
        assert_type(false, "in the hash-set function mpz_t/mpf_t/std::string for key is not passed");
    }

    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
    const hash_struct *const key = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(k);
    //?? hash_struct for value is not required, have to ask and remove.
    const hash_struct *const value = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(v);
    h_hamt = h_hamt->insert(key, value);

    return encode_hash(h_hamt);
}

void *prim_hash_u45has_u45key_u63(void *h, void *k)
{
    void *ret_val = prim_hash_u45ref(h, k);
    if (ret_val)
    {
        return encode_bool(true);
    }
    else
    {
        return encode_bool(false);
    }
}

void *prim_hash_u45count(void *h)
{
    // check if a hash
    //  get the count
    //  return the mpz_t of count
    bool type_check_hash = get_tag(h) == HASH;
    if (!type_check_hash)
    {
        assert_type(false, "in the hash-set, hash is not passed");
    }
    const hamt<hash_struct, hash_struct> *h_hamt = decode_hash(h);
    mpz_t *count = (mpz_t *)(GC_MALLOC(sizeof(mpz_t)));
    mpz_init_set_ui(*count, h_hamt->size());
    return encode_mpz(count);
}

void *prim_hash_u45keys(void *h)
{
    // to be implemented
    //?? returns the cons list of keys
    return 0;
}
#pragma endregion

#pragma region PRINTING
std::string print_val(void *val)
{
    switch (get_tag(val))
    {
    case SPL:
        if (decode_bool(val))
        {
            return "#t";
        }
        else
        {
            return "#f";
        }
        break;
    case HASH:
    {
        // !! have to write printing a hash
        // std::cout << "This is a hash" << std::endl;
        // decode the hash
        const hamt<hash_struct, hash_struct> *h = decode_hash(val);
        // mpz_t* key = (mpz_t*)(GC_MALLOC(sizeof(mpz_t)));
        // mpz_init_set_str(*key, "10", 10);
        mpf_t *key = (mpf_t *)(GC_MALLOC(sizeof(mpf_t)));
        mpf_init_set_str(*key, "10.3", 10);
        // std::string *str = new (GC) std::string("random");
        // const hash_struct *const_key = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(encode_str(str));
        const hash_struct *const_key = new ((hash_struct *)GC_MALLOC(sizeof(hash_struct))) hash_struct(encode_mpf(key));
        const hash_struct *hash_val = h->get(const_key);
        // hash_val->print_hash_val();
        break;
    }
    case MPZ:
    {

        mpz_t *final_mpz = decode_mpz(val);
        std::string str(mpz_get_str(nullptr, 10, *final_mpz));
        return str;
        break;
    }
    case STRING:
    {
        std::string str = "\"" + *(decode_str(val)) + "\"";
        return str;
        break;
    }
    case MPF:
    {
        mpf_t *final_mpf = decode_mpf(val);
        const char *boom;
        char buffer[1000];
        gmp_sprintf(buffer, "%.Ff", *final_mpf);
        return std::string(buffer);
        break;
    }
    case CONS:
    {
        return print_cons(val);
        break;
    }
    }
    return "unknown_data_type_print_val";
}

#pragma endregion

void *halt;
void *arg_buffer[999];
long numArgs;

void *fhalt()
{
    // std::cout << "In fhalt" << std::endl;
    std::cout << print_val(arg_buffer[2]) << std::endl;
    // print_val(arg_buffer[2]);
    exit(1);
}
