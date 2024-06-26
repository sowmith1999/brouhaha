#include<stdio.h>
#include<string.h>
#include "gmp_func.h"
#include "../../prelude.hpp"

// declaring global constants at the top
void* int8999;
void* bool_t8991;
void* int9002;
void* bool_f8992;
void* int8987;
void* int9001;



// declaring functions at the top
void _u43_fptr(); // +
void* _u43 = encode_clo(alloc_clo(_u43_fptr, 0));

void _u45_fptr(); // -
void* _u45 = encode_clo(alloc_clo(_u45_fptr, 0));

void _u42_fptr(); // *
void* _u42 = encode_clo(alloc_clo(_u42_fptr, 0));

void _u47_fptr(); // /
void* _u47 = encode_clo(alloc_clo(_u47_fptr, 0));

void _u61_fptr(); // =
void* _u61 = encode_clo(alloc_clo(_u61_fptr, 0));

void _u62_fptr(); // >
void* _u62 = encode_clo(alloc_clo(_u62_fptr, 0));

void _u60_fptr(); // <
void* _u60 = encode_clo(alloc_clo(_u60_fptr, 0));

void _u60_u61_fptr(); // <=
void* _u60_u61 = encode_clo(alloc_clo(_u60_u61_fptr, 0));

void _u62_u61_fptr(); // >=
void* _u62_u61 = encode_clo(alloc_clo(_u62_u61_fptr, 0));

void modulo_fptr(); // modulo
void* modulo = encode_clo(alloc_clo(modulo_fptr, 0));

void null_u63_fptr(); // null?
void* null_u63 = encode_clo(alloc_clo(null_u63_fptr, 0));

void equal_u63_fptr(); // equal?
void* equal_u63 = encode_clo(alloc_clo(equal_u63_fptr, 0));

void eq_u63_fptr(); // eq?
void* eq_u63 = encode_clo(alloc_clo(eq_u63_fptr, 0));

void cons_fptr(); // cons
void* cons = encode_clo(alloc_clo(cons_fptr, 0));

void car_fptr(); // car
void* car = encode_clo(alloc_clo(car_fptr, 0));

void cdr_fptr(); // cdr
void* cdr = encode_clo(alloc_clo(cdr_fptr, 0));

void float_u45_u62int_fptr(); // float->int
void* float_u45_u62int = encode_clo(alloc_clo(float_u45_u62int_fptr, 0));

void int_u45_u62float_fptr(); // int->float
void* int_u45_u62float = encode_clo(alloc_clo(int_u45_u62float_fptr, 0));

void hash_fptr(); // hash
void* hash = encode_clo(alloc_clo(hash_fptr, 0));

void hash_u45ref_fptr(); // hash-ref
void* hash_u45ref = encode_clo(alloc_clo(hash_u45ref_fptr, 0));

void hash_u45set_fptr(); // hash-set
void* hash_u45set = encode_clo(alloc_clo(hash_u45set_fptr, 0));

void hash_u45keys_fptr(); // hash-keys
void* hash_u45keys = encode_clo(alloc_clo(hash_u45keys_fptr, 0));

void hash_u45has_u45key_u63_fptr(); // hash-has-key?
void* hash_u45has_u45key_u63 = encode_clo(alloc_clo(hash_u45has_u45key_u63_fptr, 0));

void hash_u45count_fptr(); // hash-count
void* hash_u45count = encode_clo(alloc_clo(hash_u45count_fptr, 0));

void set_fptr(); // set
void* set = encode_clo(alloc_clo(set_fptr, 0));

void set_u45_u62list_fptr(); // set->list
void* set_u45_u62list = encode_clo(alloc_clo(set_u45_u62list_fptr, 0));

void list_u45_u62set_fptr(); // list->set
void* list_u45_u62set = encode_clo(alloc_clo(list_u45_u62set_fptr, 0));

void set_u45add_fptr(); // set-add
void* set_u45add = encode_clo(alloc_clo(set_u45add_fptr, 0));

void set_u45member_u63_fptr(); // set-member?
void* set_u45member_u63 = encode_clo(alloc_clo(set_u45member_u63_fptr, 0));

void set_u45remove_fptr(); // set-remove
void* set_u45remove = encode_clo(alloc_clo(set_u45remove_fptr, 0));

void set_u45count_fptr(); // set-count
void* set_u45count = encode_clo(alloc_clo(set_u45count_fptr, 0));

void string_u63_fptr(); // string?
void* string_u63 = encode_clo(alloc_clo(string_u63_fptr, 0));

void string_u45length_fptr(); // string-length
void* string_u45length = encode_clo(alloc_clo(string_u45length_fptr, 0));

void string_u45ref_fptr(); // string-ref
void* string_u45ref = encode_clo(alloc_clo(string_u45ref_fptr, 0));

void substring_fptr(); // substring
void* substring = encode_clo(alloc_clo(substring_fptr, 0));

void string_u45append_fptr(); // string-append
void* string_u45append = encode_clo(alloc_clo(string_u45append_fptr, 0));

void string_u45_u62list_fptr(); // string->list
void* string_u45_u62list = encode_clo(alloc_clo(string_u45_u62list_fptr, 0));

void exact_u45floor_fptr(); // exact-floor
void* exact_u45floor = encode_clo(alloc_clo(exact_u45floor_fptr, 0));

void exact_u45ceiling_fptr(); // exact-ceiling
void* exact_u45ceiling = encode_clo(alloc_clo(exact_u45ceiling_fptr, 0));

void exact_u45round_fptr(); // exact-round
void* exact_u45round = encode_clo(alloc_clo(exact_u45round_fptr, 0));

void abs_fptr(); // abs
void* abs_brouhaha = encode_clo(alloc_clo(abs_fptr, 0));

void max_fptr(); // max
void* max = encode_clo(alloc_clo(max_fptr, 0));

void min_fptr(); // min
void* min = encode_clo(alloc_clo(min_fptr, 0));

void expt_fptr(); // expt
void* expt = encode_clo(alloc_clo(expt_fptr, 0));

void sqrt_fptr(); // sqrt
void* sqrt_brouhaha = encode_clo(alloc_clo(sqrt_fptr, 0));

void remainder_fptr(); // remainder
void* remainder_brouhaha = encode_clo(alloc_clo(remainder_fptr, 0));

void quotient_fptr(); // quotient
void* quotient = encode_clo(alloc_clo(quotient_fptr, 0));

void random_fptr(); // random
void* random_brouhaha = encode_clo(alloc_clo(random_fptr, 0));

void symbol_u63_fptr(); // symbol?
void* symbol_u63 = encode_clo(alloc_clo(symbol_u63_fptr, 0));

void pair_u63_fptr(); // pair?
void* pair_u63 = encode_clo(alloc_clo(pair_u63_fptr, 0));

void positive_u63_fptr(); // positive?
void* positive_u63 = encode_clo(alloc_clo(positive_u63_fptr, 0));

void negative_u63_fptr(); // negative?
void* negative_u63 = encode_clo(alloc_clo(negative_u63_fptr, 0));

void list_fptr(); // list
void* list = encode_clo(alloc_clo(list_fptr, 0));

void even_u63_fptr(); // even?
void even_u63_spec(void* _8925, void* kont8884, void* x); // even?
void* even_u63 = encode_clo(alloc_clo(even_u63_fptr, 0));

void lam8926_fptr(); // lam8926
void lam8926_spec(void* env8927, void* id_8744); // lam8926
void* lam8926 = encode_clo(alloc_clo(lam8926_fptr, 0));

void boolean_u63_fptr(); // boolean?
void boolean_u63_spec(void* _8928, void* kont8885, void* x); // boolean?
void* boolean_u63 = encode_clo(alloc_clo(boolean_u63_fptr, 0));

void odd_u63_fptr(); // odd?
void odd_u63_spec(void* _8929, void* kont8887, void* x); // odd?
void* odd_u63 = encode_clo(alloc_clo(odd_u63_fptr, 0));

void list_u45ref_fptr(); // list-ref
void list_u45ref_spec(void* _8930, void* kont8888, void* lst, void* n); // list-ref
void* list_u45ref = encode_clo(alloc_clo(list_u45ref_fptr, 0));

void lam8931_fptr(); // lam8931
void lam8931_spec(void* env8932, void* id_8759); // lam8931
void* lam8931 = encode_clo(alloc_clo(lam8931_fptr, 0));

void member_fptr(); // member
void member_spec(void* _8933, void* kont8889, void* item, void* lst); // member
void* member = encode_clo(alloc_clo(member_fptr, 0));

void member_u63_fptr(); // member?
void member_u63_spec(void* _8934, void* kont8891, void* x, void* lst); // member?
void* member_u63 = encode_clo(alloc_clo(member_u63_fptr, 0));

void lam8935_fptr(); // lam8935
void lam8935_spec(void* env8936, void* id_8774); // lam8935
void* lam8935 = encode_clo(alloc_clo(lam8935_fptr, 0));

void length_fptr(); // length
void length_spec(void* _8937, void* kont8892, void* lst); // length
void* length = encode_clo(alloc_clo(length_fptr, 0));

void lam8938_fptr(); // lam8938
void lam8938_spec(void* env8939, void* id_8780); // lam8938
void* lam8938 = encode_clo(alloc_clo(lam8938_fptr, 0));

void lam8940_fptr(); // lam8940
void lam8940_spec(void* env8941, void* id_8778); // lam8940
void* lam8940 = encode_clo(alloc_clo(lam8940_fptr, 0));

void map_fptr(); // map
void map_spec(void* _8942, void* kont8894, void* proc, void* lst); // map
void* map = encode_clo(alloc_clo(map_fptr, 0));

void lam8943_fptr(); // lam8943
void lam8943_spec(void* env8944, void* id_8787); // lam8943
void* lam8943 = encode_clo(alloc_clo(lam8943_fptr, 0));

void lam8945_fptr(); // lam8945
void lam8945_spec(void* env8946, void* id_8784); // lam8945
void* lam8945 = encode_clo(alloc_clo(lam8945_fptr, 0));

void filter_fptr(); // filter
void filter_spec(void* _8947, void* kont8897, void* op, void* lst); // filter
void* filter = encode_clo(alloc_clo(filter_fptr, 0));

void drop_fptr(); // drop
void drop_spec(void* _8948, void* kont8900, void* lst, void* n); // drop
void* drop = encode_clo(alloc_clo(drop_fptr, 0));

void lam8949_fptr(); // lam8949
void lam8949_spec(void* env8950, void* id_8796); // lam8949
void* lam8949 = encode_clo(alloc_clo(lam8949_fptr, 0));

void foldl_fptr(); // foldl
void foldl_spec(void* _8951, void* kont8901, void* fun, void* acc, void* lst); // foldl
void* foldl = encode_clo(alloc_clo(foldl_fptr, 0));

void lam8952_fptr(); // lam8952
void lam8952_spec(void* env8953, void* id_8801); // lam8952
void* lam8952 = encode_clo(alloc_clo(lam8952_fptr, 0));

void foldr_fptr(); // foldr
void foldr_spec(void* _8954, void* kont8903, void* fun, void* acc, void* lst); // foldr
void* foldr = encode_clo(alloc_clo(foldr_fptr, 0));

void reverse_u45helper_fptr(); // reverse-helper
void reverse_u45helper_spec(void* _8955, void* kont8905, void* lst, void* lst2); // reverse-helper
void* reverse_u45helper = encode_clo(alloc_clo(reverse_u45helper_fptr, 0));

void reverse_fptr(); // reverse
void reverse_spec(void* _8956, void* kont8906, void* lst); // reverse
void* reverse = encode_clo(alloc_clo(reverse_fptr, 0));

void lam8957_fptr(); // lam8957
void lam8957_spec(void* env8958, void* id_8810); // lam8957
void* lam8957 = encode_clo(alloc_clo(lam8957_fptr, 0));

void append1_fptr(); // append1
void append1_spec(void* _8959, void* kont8907, void* lhs, void* rhs); // append1
void* append1 = encode_clo(alloc_clo(append1_fptr, 0));

void lam8960_fptr(); // lam8960
void lam8960_spec(void* env8961, void* xy8812); // lam8960
void* lam8960 = encode_clo(alloc_clo(lam8960_fptr, 0));

void lam8962_fptr(); // lam8962
void lam8962_spec(void* env8963, void* id_8815); // lam8962
void* lam8962 = encode_clo(alloc_clo(lam8962_fptr, 0));

void lam8964_fptr(); // lam8964
void lam8964_spec(void* env8965, void* lsts); // lam8964
void* lam8964 = encode_clo(alloc_clo(lam8964_fptr, 0));

void append_fptr(); // append
void* append = encode_clo(alloc_clo(append_fptr, 0));

void lam8967_fptr(); // lam8967
void lam8967_spec(void* env8968, void* xy8818); // lam8967
void* lam8967 = encode_clo(alloc_clo(lam8967_fptr, 0));

void take_u45helper_fptr(); // take-helper
void take_u45helper_spec(void* _8969, void* kont8913, void* lst, void* n, void* lst2); // take-helper
void* take_u45helper = encode_clo(alloc_clo(take_u45helper_fptr, 0));

void take_fptr(); // take
void take_spec(void* _8970, void* kont8915, void* lst, void* n); // take
void* take = encode_clo(alloc_clo(take_fptr, 0));

void lam8971_fptr(); // lam8971
void lam8971_spec(void* env8972, void* id_8832); // lam8971
void* lam8971 = encode_clo(alloc_clo(lam8971_fptr, 0));

void list_u45set_fptr(); // list-set
void list_u45set_spec(void* _8973, void* kont8916, void* lst, void* index, void* value); // list-set
void* list_u45set = encode_clo(alloc_clo(list_u45set_fptr, 0));

void lam8974_fptr(); // lam8974
void lam8974_spec(void* env8975, void* id_8839); // lam8974
void* lam8974 = encode_clo(alloc_clo(lam8974_fptr, 0));

void lam8976_fptr(); // lam8976
void lam8976_spec(void* env8977, void* id_8837); // lam8976
void* lam8976 = encode_clo(alloc_clo(lam8976_fptr, 0));

void flatten_fptr(); // flatten
void flatten_spec(void* _8978, void* kont8918, void* lst); // flatten
void* flatten = encode_clo(alloc_clo(flatten_fptr, 0));

void addd_fptr(); // addd
void addd_spec(void* _8979, void* kont8921, void* y, void* z); // addd
void* addd = encode_clo(alloc_clo(addd_fptr, 0));

void call_fptr(); // call
void call_spec(void* _8980, void* kont8922, void* x); // call
void* call = encode_clo(alloc_clo(call_fptr, 0));

void brouhaha_main_fptr(); // brouhaha_main
void brouhaha_main_spec(void* _8981, void* kont8923); // brouhaha_main
void* brouhaha_main = encode_clo(alloc_clo(brouhaha_main_fptr, 0));



inline void _u43_fptr() // + 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9003 = prim_car(lst);
void* const lst9005 = prim_cdr(lst);
void* const x9004 = apply_prim__u43(lst9005);
arg_buffer[1] = kont9003;
arg_buffer[2] = x9004;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9003))[0])();
}
else
{
void* const kont9003 = arg_buffer[2];
void* const x9004 = apply_prim__u43(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9003))[0])(kont9003, x9004);
}

}

inline void _u45_fptr() // - 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9006 = prim_car(lst);
void* const lst9008 = prim_cdr(lst);
void* const x9007 = apply_prim__u45(lst9008);
arg_buffer[1] = kont9006;
arg_buffer[2] = x9007;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9006))[0])();
}
else
{
void* const kont9006 = arg_buffer[2];
void* const x9007 = apply_prim__u45(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9006))[0])(kont9006, x9007);
}

}

inline void _u42_fptr() // * 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9009 = prim_car(lst);
void* const lst9011 = prim_cdr(lst);
void* const x9010 = apply_prim__u42(lst9011);
arg_buffer[1] = kont9009;
arg_buffer[2] = x9010;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9009))[0])();
}
else
{
void* const kont9009 = arg_buffer[2];
void* const x9010 = apply_prim__u42(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9009))[0])(kont9009, x9010);
}

}

inline void _u47_fptr() // / 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9012 = prim_car(lst);
void* const lst9014 = prim_cdr(lst);
void* const x9013 = apply_prim__u47(lst9014);
arg_buffer[1] = kont9012;
arg_buffer[2] = x9013;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9012))[0])();
}
else
{
void* const kont9012 = arg_buffer[2];
void* const x9013 = apply_prim__u47(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9012))[0])(kont9012, x9013);
}

}

inline void _u61_fptr() // = 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9015 = prim_car(lst);
void* const lst9017 = prim_cdr(lst);
void* const x9016 = apply_prim__u61(lst9017);
arg_buffer[1] = kont9015;
arg_buffer[2] = x9016;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9015))[0])();
}
else
{
void* const kont9015 = arg_buffer[2];
void* const x9016 = apply_prim__u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9015))[0])(kont9015, x9016);
}

}

inline void _u62_fptr() // > 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9018 = prim_car(lst);
void* const lst9020 = prim_cdr(lst);
void* const x9019 = apply_prim__u62(lst9020);
arg_buffer[1] = kont9018;
arg_buffer[2] = x9019;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9018))[0])();
}
else
{
void* const kont9018 = arg_buffer[2];
void* const x9019 = apply_prim__u62(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9018))[0])(kont9018, x9019);
}

}

inline void _u60_fptr() // < 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9021 = prim_car(lst);
void* const lst9023 = prim_cdr(lst);
void* const x9022 = apply_prim__u60(lst9023);
arg_buffer[1] = kont9021;
arg_buffer[2] = x9022;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9021))[0])();
}
else
{
void* const kont9021 = arg_buffer[2];
void* const x9022 = apply_prim__u60(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9021))[0])(kont9021, x9022);
}

}

inline void _u60_u61_fptr() // <= 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9024 = prim_car(lst);
void* const lst9026 = prim_cdr(lst);
void* const x9025 = apply_prim__u60_u61(lst9026);
arg_buffer[1] = kont9024;
arg_buffer[2] = x9025;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9024))[0])();
}
else
{
void* const kont9024 = arg_buffer[2];
void* const x9025 = apply_prim__u60_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9024))[0])(kont9024, x9025);
}

}

inline void _u62_u61_fptr() // >= 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9027 = prim_car(lst);
void* const lst9029 = prim_cdr(lst);
void* const x9028 = apply_prim__u62_u61(lst9029);
arg_buffer[1] = kont9027;
arg_buffer[2] = x9028;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9027))[0])();
}
else
{
void* const kont9027 = arg_buffer[2];
void* const x9028 = apply_prim__u62_u61(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9027))[0])(kont9027, x9028);
}

}

inline void modulo_fptr() // modulo 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9030 = prim_car(lst);
void* const lst9032 = prim_cdr(lst);
void* const x9031 = apply_prim_modulo(lst9032);
arg_buffer[1] = kont9030;
arg_buffer[2] = x9031;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9030))[0])();
}
else
{
void* const kont9030 = arg_buffer[2];
void* const x9031 = apply_prim_modulo(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9030))[0])(kont9030, x9031);
}

}

inline void null_u63_fptr() // null? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9033 = prim_car(lst);
void* const lst9035 = prim_cdr(lst);
void* const x9034 = apply_prim_null_u63(lst9035);
arg_buffer[1] = kont9033;
arg_buffer[2] = x9034;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9033))[0])();
}
else
{
void* const kont9033 = arg_buffer[2];
void* const x9034 = apply_prim_null_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9033))[0])(kont9033, x9034);
}

}

inline void equal_u63_fptr() // equal? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9036 = prim_car(lst);
void* const lst9038 = prim_cdr(lst);
void* const x9037 = apply_prim_equal_u63(lst9038);
arg_buffer[1] = kont9036;
arg_buffer[2] = x9037;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9036))[0])();
}
else
{
void* const kont9036 = arg_buffer[2];
void* const x9037 = apply_prim_equal_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9036))[0])(kont9036, x9037);
}

}

inline void eq_u63_fptr() // eq? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9039 = prim_car(lst);
void* const lst9041 = prim_cdr(lst);
void* const x9040 = apply_prim_eq_u63(lst9041);
arg_buffer[1] = kont9039;
arg_buffer[2] = x9040;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9039))[0])();
}
else
{
void* const kont9039 = arg_buffer[2];
void* const x9040 = apply_prim_eq_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9039))[0])(kont9039, x9040);
}

}

inline void cons_fptr() // cons 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9042 = prim_car(lst);
void* const lst9044 = prim_cdr(lst);
void* const x9043 = apply_prim_cons(lst9044);
arg_buffer[1] = kont9042;
arg_buffer[2] = x9043;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9042))[0])();
}
else
{
void* const kont9042 = arg_buffer[2];
void* const x9043 = apply_prim_cons(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9042))[0])(kont9042, x9043);
}

}

inline void car_fptr() // car 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9045 = prim_car(lst);
void* const lst9047 = prim_cdr(lst);
void* const x9046 = apply_prim_car(lst9047);
arg_buffer[1] = kont9045;
arg_buffer[2] = x9046;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9045))[0])();
}
else
{
void* const kont9045 = arg_buffer[2];
void* const x9046 = apply_prim_car(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9045))[0])(kont9045, x9046);
}

}

inline void cdr_fptr() // cdr 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9048 = prim_car(lst);
void* const lst9050 = prim_cdr(lst);
void* const x9049 = apply_prim_cdr(lst9050);
arg_buffer[1] = kont9048;
arg_buffer[2] = x9049;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9048))[0])();
}
else
{
void* const kont9048 = arg_buffer[2];
void* const x9049 = apply_prim_cdr(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9048))[0])(kont9048, x9049);
}

}

inline void float_u45_u62int_fptr() // float->int 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9051 = prim_car(lst);
void* const lst9053 = prim_cdr(lst);
void* const x9052 = apply_prim_float_u45_u62int(lst9053);
arg_buffer[1] = kont9051;
arg_buffer[2] = x9052;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9051))[0])();
}
else
{
void* const kont9051 = arg_buffer[2];
void* const x9052 = apply_prim_float_u45_u62int(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9051))[0])(kont9051, x9052);
}

}

inline void int_u45_u62float_fptr() // int->float 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9054 = prim_car(lst);
void* const lst9056 = prim_cdr(lst);
void* const x9055 = apply_prim_int_u45_u62float(lst9056);
arg_buffer[1] = kont9054;
arg_buffer[2] = x9055;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9054))[0])();
}
else
{
void* const kont9054 = arg_buffer[2];
void* const x9055 = apply_prim_int_u45_u62float(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9054))[0])(kont9054, x9055);
}

}

inline void hash_fptr() // hash 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9057 = prim_car(lst);
void* const lst9059 = prim_cdr(lst);
void* const x9058 = apply_prim_hash(lst9059);
arg_buffer[1] = kont9057;
arg_buffer[2] = x9058;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9057))[0])();
}
else
{
void* const kont9057 = arg_buffer[2];
void* const x9058 = apply_prim_hash(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9057))[0])(kont9057, x9058);
}

}

inline void hash_u45ref_fptr() // hash-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9060 = prim_car(lst);
void* const lst9062 = prim_cdr(lst);
void* const x9061 = apply_prim_hash_u45ref(lst9062);
arg_buffer[1] = kont9060;
arg_buffer[2] = x9061;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9060))[0])();
}
else
{
void* const kont9060 = arg_buffer[2];
void* const x9061 = apply_prim_hash_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9060))[0])(kont9060, x9061);
}

}

inline void hash_u45set_fptr() // hash-set 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9063 = prim_car(lst);
void* const lst9065 = prim_cdr(lst);
void* const x9064 = apply_prim_hash_u45set(lst9065);
arg_buffer[1] = kont9063;
arg_buffer[2] = x9064;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9063))[0])();
}
else
{
void* const kont9063 = arg_buffer[2];
void* const x9064 = apply_prim_hash_u45set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9063))[0])(kont9063, x9064);
}

}

inline void hash_u45keys_fptr() // hash-keys 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9066 = prim_car(lst);
void* const lst9068 = prim_cdr(lst);
void* const x9067 = apply_prim_hash_u45keys(lst9068);
arg_buffer[1] = kont9066;
arg_buffer[2] = x9067;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9066))[0])();
}
else
{
void* const kont9066 = arg_buffer[2];
void* const x9067 = apply_prim_hash_u45keys(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9066))[0])(kont9066, x9067);
}

}

inline void hash_u45has_u45key_u63_fptr() // hash-has-key? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9069 = prim_car(lst);
void* const lst9071 = prim_cdr(lst);
void* const x9070 = apply_prim_hash_u45has_u45key_u63(lst9071);
arg_buffer[1] = kont9069;
arg_buffer[2] = x9070;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9069))[0])();
}
else
{
void* const kont9069 = arg_buffer[2];
void* const x9070 = apply_prim_hash_u45has_u45key_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9069))[0])(kont9069, x9070);
}

}

inline void hash_u45count_fptr() // hash-count 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9072 = prim_car(lst);
void* const lst9074 = prim_cdr(lst);
void* const x9073 = apply_prim_hash_u45count(lst9074);
arg_buffer[1] = kont9072;
arg_buffer[2] = x9073;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9072))[0])();
}
else
{
void* const kont9072 = arg_buffer[2];
void* const x9073 = apply_prim_hash_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9072))[0])(kont9072, x9073);
}

}

inline void set_fptr() // set 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9075 = prim_car(lst);
void* const lst9077 = prim_cdr(lst);
void* const x9076 = apply_prim_set(lst9077);
arg_buffer[1] = kont9075;
arg_buffer[2] = x9076;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9075))[0])();
}
else
{
void* const kont9075 = arg_buffer[2];
void* const x9076 = apply_prim_set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9075))[0])(kont9075, x9076);
}

}

inline void set_u45_u62list_fptr() // set->list 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9078 = prim_car(lst);
void* const lst9080 = prim_cdr(lst);
void* const x9079 = apply_prim_set_u45_u62list(lst9080);
arg_buffer[1] = kont9078;
arg_buffer[2] = x9079;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9078))[0])();
}
else
{
void* const kont9078 = arg_buffer[2];
void* const x9079 = apply_prim_set_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9078))[0])(kont9078, x9079);
}

}

inline void list_u45_u62set_fptr() // list->set 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9081 = prim_car(lst);
void* const lst9083 = prim_cdr(lst);
void* const x9082 = apply_prim_list_u45_u62set(lst9083);
arg_buffer[1] = kont9081;
arg_buffer[2] = x9082;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9081))[0])();
}
else
{
void* const kont9081 = arg_buffer[2];
void* const x9082 = apply_prim_list_u45_u62set(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9081))[0])(kont9081, x9082);
}

}

inline void set_u45add_fptr() // set-add 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9084 = prim_car(lst);
void* const lst9086 = prim_cdr(lst);
void* const x9085 = apply_prim_set_u45add(lst9086);
arg_buffer[1] = kont9084;
arg_buffer[2] = x9085;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9084))[0])();
}
else
{
void* const kont9084 = arg_buffer[2];
void* const x9085 = apply_prim_set_u45add(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9084))[0])(kont9084, x9085);
}

}

inline void set_u45member_u63_fptr() // set-member? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9087 = prim_car(lst);
void* const lst9089 = prim_cdr(lst);
void* const x9088 = apply_prim_set_u45member_u63(lst9089);
arg_buffer[1] = kont9087;
arg_buffer[2] = x9088;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9087))[0])();
}
else
{
void* const kont9087 = arg_buffer[2];
void* const x9088 = apply_prim_set_u45member_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9087))[0])(kont9087, x9088);
}

}

inline void set_u45remove_fptr() // set-remove 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9090 = prim_car(lst);
void* const lst9092 = prim_cdr(lst);
void* const x9091 = apply_prim_set_u45remove(lst9092);
arg_buffer[1] = kont9090;
arg_buffer[2] = x9091;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9090))[0])();
}
else
{
void* const kont9090 = arg_buffer[2];
void* const x9091 = apply_prim_set_u45remove(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9090))[0])(kont9090, x9091);
}

}

inline void set_u45count_fptr() // set-count 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9093 = prim_car(lst);
void* const lst9095 = prim_cdr(lst);
void* const x9094 = apply_prim_set_u45count(lst9095);
arg_buffer[1] = kont9093;
arg_buffer[2] = x9094;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9093))[0])();
}
else
{
void* const kont9093 = arg_buffer[2];
void* const x9094 = apply_prim_set_u45count(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9093))[0])(kont9093, x9094);
}

}

inline void string_u63_fptr() // string? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9096 = prim_car(lst);
void* const lst9098 = prim_cdr(lst);
void* const x9097 = apply_prim_string_u63(lst9098);
arg_buffer[1] = kont9096;
arg_buffer[2] = x9097;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9096))[0])();
}
else
{
void* const kont9096 = arg_buffer[2];
void* const x9097 = apply_prim_string_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9096))[0])(kont9096, x9097);
}

}

inline void string_u45length_fptr() // string-length 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9099 = prim_car(lst);
void* const lst9101 = prim_cdr(lst);
void* const x9100 = apply_prim_string_u45length(lst9101);
arg_buffer[1] = kont9099;
arg_buffer[2] = x9100;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9099))[0])();
}
else
{
void* const kont9099 = arg_buffer[2];
void* const x9100 = apply_prim_string_u45length(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9099))[0])(kont9099, x9100);
}

}

inline void string_u45ref_fptr() // string-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9102 = prim_car(lst);
void* const lst9104 = prim_cdr(lst);
void* const x9103 = apply_prim_string_u45ref(lst9104);
arg_buffer[1] = kont9102;
arg_buffer[2] = x9103;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9102))[0])();
}
else
{
void* const kont9102 = arg_buffer[2];
void* const x9103 = apply_prim_string_u45ref(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9102))[0])(kont9102, x9103);
}

}

inline void substring_fptr() // substring 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9105 = prim_car(lst);
void* const lst9107 = prim_cdr(lst);
void* const x9106 = apply_prim_substring(lst9107);
arg_buffer[1] = kont9105;
arg_buffer[2] = x9106;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9105))[0])();
}
else
{
void* const kont9105 = arg_buffer[2];
void* const x9106 = apply_prim_substring(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9105))[0])(kont9105, x9106);
}

}

inline void string_u45append_fptr() // string-append 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9108 = prim_car(lst);
void* const lst9110 = prim_cdr(lst);
void* const x9109 = apply_prim_string_u45append(lst9110);
arg_buffer[1] = kont9108;
arg_buffer[2] = x9109;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9108))[0])();
}
else
{
void* const kont9108 = arg_buffer[2];
void* const x9109 = apply_prim_string_u45append(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9108))[0])(kont9108, x9109);
}

}

inline void string_u45_u62list_fptr() // string->list 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9111 = prim_car(lst);
void* const lst9113 = prim_cdr(lst);
void* const x9112 = apply_prim_string_u45_u62list(lst9113);
arg_buffer[1] = kont9111;
arg_buffer[2] = x9112;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9111))[0])();
}
else
{
void* const kont9111 = arg_buffer[2];
void* const x9112 = apply_prim_string_u45_u62list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9111))[0])(kont9111, x9112);
}

}

inline void exact_u45floor_fptr() // exact-floor 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9114 = prim_car(lst);
void* const lst9116 = prim_cdr(lst);
void* const x9115 = apply_prim_exact_u45floor(lst9116);
arg_buffer[1] = kont9114;
arg_buffer[2] = x9115;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9114))[0])();
}
else
{
void* const kont9114 = arg_buffer[2];
void* const x9115 = apply_prim_exact_u45floor(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9114))[0])(kont9114, x9115);
}

}

inline void exact_u45ceiling_fptr() // exact-ceiling 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9117 = prim_car(lst);
void* const lst9119 = prim_cdr(lst);
void* const x9118 = apply_prim_exact_u45ceiling(lst9119);
arg_buffer[1] = kont9117;
arg_buffer[2] = x9118;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9117))[0])();
}
else
{
void* const kont9117 = arg_buffer[2];
void* const x9118 = apply_prim_exact_u45ceiling(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9117))[0])(kont9117, x9118);
}

}

inline void exact_u45round_fptr() // exact-round 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9120 = prim_car(lst);
void* const lst9122 = prim_cdr(lst);
void* const x9121 = apply_prim_exact_u45round(lst9122);
arg_buffer[1] = kont9120;
arg_buffer[2] = x9121;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9120))[0])();
}
else
{
void* const kont9120 = arg_buffer[2];
void* const x9121 = apply_prim_exact_u45round(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9120))[0])(kont9120, x9121);
}

}

inline void abs_fptr() // abs 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9123 = prim_car(lst);
void* const lst9125 = prim_cdr(lst);
void* const x9124 = apply_prim_abs(lst9125);
arg_buffer[1] = kont9123;
arg_buffer[2] = x9124;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9123))[0])();
}
else
{
void* const kont9123 = arg_buffer[2];
void* const x9124 = apply_prim_abs(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9123))[0])(kont9123, x9124);
}

}

inline void max_fptr() // max 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9126 = prim_car(lst);
void* const lst9128 = prim_cdr(lst);
void* const x9127 = apply_prim_max(lst9128);
arg_buffer[1] = kont9126;
arg_buffer[2] = x9127;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9126))[0])();
}
else
{
void* const kont9126 = arg_buffer[2];
void* const x9127 = apply_prim_max(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9126))[0])(kont9126, x9127);
}

}

inline void min_fptr() // min 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9129 = prim_car(lst);
void* const lst9131 = prim_cdr(lst);
void* const x9130 = apply_prim_min(lst9131);
arg_buffer[1] = kont9129;
arg_buffer[2] = x9130;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9129))[0])();
}
else
{
void* const kont9129 = arg_buffer[2];
void* const x9130 = apply_prim_min(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9129))[0])(kont9129, x9130);
}

}

inline void expt_fptr() // expt 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9132 = prim_car(lst);
void* const lst9134 = prim_cdr(lst);
void* const x9133 = apply_prim_expt(lst9134);
arg_buffer[1] = kont9132;
arg_buffer[2] = x9133;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9132))[0])();
}
else
{
void* const kont9132 = arg_buffer[2];
void* const x9133 = apply_prim_expt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9132))[0])(kont9132, x9133);
}

}

inline void sqrt_fptr() // sqrt 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9135 = prim_car(lst);
void* const lst9137 = prim_cdr(lst);
void* const x9136 = apply_prim_sqrt(lst9137);
arg_buffer[1] = kont9135;
arg_buffer[2] = x9136;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9135))[0])();
}
else
{
void* const kont9135 = arg_buffer[2];
void* const x9136 = apply_prim_sqrt(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9135))[0])(kont9135, x9136);
}

}

inline void remainder_fptr() // remainder 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9138 = prim_car(lst);
void* const lst9140 = prim_cdr(lst);
void* const x9139 = apply_prim_remainder(lst9140);
arg_buffer[1] = kont9138;
arg_buffer[2] = x9139;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9138))[0])();
}
else
{
void* const kont9138 = arg_buffer[2];
void* const x9139 = apply_prim_remainder(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9138))[0])(kont9138, x9139);
}

}

inline void quotient_fptr() // quotient 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9141 = prim_car(lst);
void* const lst9143 = prim_cdr(lst);
void* const x9142 = apply_prim_quotient(lst9143);
arg_buffer[1] = kont9141;
arg_buffer[2] = x9142;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9141))[0])();
}
else
{
void* const kont9141 = arg_buffer[2];
void* const x9142 = apply_prim_quotient(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9141))[0])(kont9141, x9142);
}

}

inline void random_fptr() // random 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9144 = prim_car(lst);
void* const lst9146 = prim_cdr(lst);
void* const x9145 = apply_prim_random(lst9146);
arg_buffer[1] = kont9144;
arg_buffer[2] = x9145;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9144))[0])();
}
else
{
void* const kont9144 = arg_buffer[2];
void* const x9145 = apply_prim_random(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9144))[0])(kont9144, x9145);
}

}

inline void symbol_u63_fptr() // symbol? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9147 = prim_car(lst);
void* const lst9149 = prim_cdr(lst);
void* const x9148 = apply_prim_symbol_u63(lst9149);
arg_buffer[1] = kont9147;
arg_buffer[2] = x9148;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9147))[0])();
}
else
{
void* const kont9147 = arg_buffer[2];
void* const x9148 = apply_prim_symbol_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9147))[0])(kont9147, x9148);
}

}

inline void pair_u63_fptr() // pair? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9150 = prim_car(lst);
void* const lst9152 = prim_cdr(lst);
void* const x9151 = apply_prim_pair_u63(lst9152);
arg_buffer[1] = kont9150;
arg_buffer[2] = x9151;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9150))[0])();
}
else
{
void* const kont9150 = arg_buffer[2];
void* const x9151 = apply_prim_pair_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9150))[0])(kont9150, x9151);
}

}

inline void positive_u63_fptr() // positive? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9153 = prim_car(lst);
void* const lst9155 = prim_cdr(lst);
void* const x9154 = apply_prim_positive_u63(lst9155);
arg_buffer[1] = kont9153;
arg_buffer[2] = x9154;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9153))[0])();
}
else
{
void* const kont9153 = arg_buffer[2];
void* const x9154 = apply_prim_positive_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9153))[0])(kont9153, x9154);
}

}

inline void negative_u63_fptr() // negative? 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9156 = prim_car(lst);
void* const lst9158 = prim_cdr(lst);
void* const x9157 = apply_prim_negative_u63(lst9158);
arg_buffer[1] = kont9156;
arg_buffer[2] = x9157;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9156))[0])();
}
else
{
void* const kont9156 = arg_buffer[2];
void* const x9157 = apply_prim_negative_u63(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9156))[0])(kont9156, x9157);
}

}

inline void list_fptr() // list 
{
//decoding closure array
void** decode_clo_array = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
void* const lst = arg_buffer[2];
void* const kont9159 = prim_car(lst);
void* const lst9161 = prim_cdr(lst);
void* const x9160 = apply_prim_list(lst9161);
arg_buffer[1] = kont9159;
arg_buffer[2] = x9160;
numArgs = 2;
reinterpret_cast<void (*)()>((decode_clo(kont9159))[0])();
}
else
{
void* const kont9159 = arg_buffer[2];
void* const x9160 = apply_prim_list(arg_buffer);
reinterpret_cast<void (*)(void*, void*)>((decode_clo(kont9159))[0])(kont9159, x9160);
}

}

inline void even_u63_fptr() // even? -> generic version 
{
//reading env and args
void* const kont8884 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8884)[0])(kont8884, apply_prim_equal_u63_2(int8999, apply_prim_modulo_2(x, int8987)));
}

inline void even_u63_spec(void* _8925, void* kont8884, void* x) // even? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8884)[0])(kont8884, apply_prim_equal_u63_2(int8999, apply_prim_modulo_2(x, int8987)));
}

inline void lam8926_fptr() // lam8926 -> generic version 
{
//reading env
void* const env8927 = arg_buffer[1];
//reading env and args
void* const id_8744 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);

//if-clause
if(is_true(id_8744))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_t8991);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f8992);
}

}

inline void lam8926_spec(void* env8927, void* id_8744) // lam8926 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8927);

//if-clause
if(is_true(id_8744))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_t8991);
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f8992);
}

}

inline void boolean_u63_fptr() // boolean? -> generic version 
{
//reading env and args
void* const kont8885 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9162 = alloc_kont(lam8926_spec, 1);

//setting env list
clo9162[1] = kont8885;
void* f_lam_8886 = encode_clo(clo9162);



//if-clause
if(is_true(apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)")))))
{
// kont-clo-app case
lam8926_spec(f_lam_8886, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)"))));
}
else
{
// kont-clo-app case
lam8926_spec(f_lam_8886, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #f)"))));
}

}

inline void boolean_u63_spec(void* _8928, void* kont8885, void* x) // boolean? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9163 = alloc_kont(lam8926_spec, 1);

//setting env list
clo9163[1] = kont8885;
void* f_lam_8886 = encode_clo(clo9163);



//if-clause
if(is_true(apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)")))))
{
// kont-clo-app case
lam8926_spec(f_lam_8886, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #t)"))));
}
else
{
// kont-clo-app case
lam8926_spec(f_lam_8886, apply_prim_eq_u63_2(x, encode_str(new(GC) std::string("(quote #f)"))));
}

}

inline void odd_u63_fptr() // odd? -> generic version 
{
//reading env and args
void* const kont8887 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8887)[0])(kont8887, apply_prim_equal_u63_2(int9002, apply_prim_modulo_2(x, int8987)));
}

inline void odd_u63_spec(void* _8929, void* kont8887, void* x) // odd? 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8887)[0])(kont8887, apply_prim_equal_u63_2(int9002, apply_prim_modulo_2(x, int8987)));
}

inline void list_u45ref_fptr() // list-ref -> generic version 
{
//reading env and args
void* const kont8888 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8999, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8888)[0])(kont8888, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8888, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9002));
}

}

inline void list_u45ref_spec(void* _8930, void* kont8888, void* lst, void* n) // list-ref 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(int8999, n)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8888)[0])(kont8888, apply_prim_car_1(lst));
}
else
{

//clo-app
list_u45ref_spec(list_u45ref, kont8888, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9002));
}

}

inline void lam8931_fptr() // lam8931 -> generic version 
{
//reading env
void* const env8932 = arg_buffer[1];
//reading env and args
void* const id_8759 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8932);

//if-clause
if(is_true(id_8759))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f8992);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[3]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[1], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

}

inline void lam8931_spec(void* env8932, void* id_8759) // lam8931 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8932);

//if-clause
if(is_true(id_8759))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], bool_f8992);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(decode_clo_array[2], apply_prim_car_1(decode_clo_array[3]))))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], decode_clo_array[3]);
}
else
{

//clo-app
member_spec(member, decode_clo_array[1], decode_clo_array[2], apply_prim_cdr_1(decode_clo_array[3]));
}

}

}

inline void member_fptr() // member -> generic version 
{
//reading env and args
void* const kont8889 = arg_buffer[2];
void* const item = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9164 = alloc_kont(lam8931_spec, 3);

//setting env list
clo9164[1] = kont8889;
clo9164[2] = item;
clo9164[3] = lst;
void* f_lam_8890 = encode_clo(clo9164);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8931_spec(f_lam_8890, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8931_spec(f_lam_8890, apply_prim_null_u63_1(lst));
}

}

inline void member_spec(void* _8933, void* kont8889, void* item, void* lst) // member 
{
//decoding closure array
void** decode_clo_array = nullptr;

//creating new make-kont closure
void** clo9165 = alloc_kont(lam8931_spec, 3);

//setting env list
clo9165[1] = kont8889;
clo9165[2] = item;
clo9165[3] = lst;
void* f_lam_8890 = encode_clo(clo9165);



//if-clause
if(is_true(apply_prim_null_u63_1(item)))
{
// kont-clo-app case
lam8931_spec(f_lam_8890, apply_prim_null_u63_1(item));
}
else
{
// kont-clo-app case
lam8931_spec(f_lam_8890, apply_prim_null_u63_1(lst));
}

}

inline void member_u63_fptr() // member? -> generic version 
{
//reading env and args
void* const kont8891 = arg_buffer[2];
void* const x = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8891)[0])(kont8891, bool_f8992);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8891)[0])(kont8891, bool_t8991);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8891, x, apply_prim_cdr_1(lst));
}

}

}

inline void member_u63_spec(void* _8934, void* kont8891, void* x, void* lst) // member? 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8891)[0])(kont8891, bool_f8992);
}
else
{

//if-clause
if(is_true(apply_prim_equal_u63_2(apply_prim_car_1(lst), x)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8891)[0])(kont8891, bool_t8991);
}
else
{

//clo-app
member_u63_spec(member_u63, kont8891, x, apply_prim_cdr_1(lst));
}

}

}

inline void lam8935_fptr() // lam8935 -> generic version 
{
//reading env
void* const env8936 = arg_buffer[1];
//reading env and args
void* const id_8774 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8936);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8774));
}

inline void lam8935_spec(void* env8936, void* id_8774) // lam8935 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8936);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim__u43_2(decode_clo_array[2], id_8774));
}

inline void length_fptr() // length -> generic version 
{
//reading env and args
void* const kont8892 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8892)[0])(kont8892, int8999);
}
else
{

//creating new make-kont closure
void** clo9166 = alloc_kont(lam8935_spec, 2);

//setting env list
clo9166[1] = kont8892;
clo9166[2] = int9002;
void* f_lam_8893 = encode_clo(clo9166);



//clo-app
length_spec(length, f_lam_8893, apply_prim_cdr_1(lst));
}

}

inline void length_spec(void* _8937, void* kont8892, void* lst) // length 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8892)[0])(kont8892, int8999);
}
else
{

//creating new make-kont closure
void** clo9167 = alloc_kont(lam8935_spec, 2);

//setting env list
clo9167[1] = kont8892;
clo9167[2] = int9002;
void* f_lam_8893 = encode_clo(clo9167);



//clo-app
length_spec(length, f_lam_8893, apply_prim_cdr_1(lst));
}

}

inline void lam8938_fptr() // lam8938 -> generic version 
{
//reading env
void* const env8939 = arg_buffer[1];
//reading env and args
void* const id_8780 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8939);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8780));
}

inline void lam8938_spec(void* env8939, void* id_8780) // lam8938 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8939);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8780));
}

inline void lam8940_fptr() // lam8940 -> generic version 
{
//reading env
void* const env8941 = arg_buffer[1];
//reading env and args
void* const id_8778 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8941);

//creating new make-kont closure
void** clo9168 = alloc_kont(lam8938_spec, 2);

//setting env list
clo9168[1] = id_8778;
clo9168[2] = decode_clo_array[3];
void* f_lam_8895 = encode_clo(clo9168);



//clo-app
map_spec(map, f_lam_8895, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam8940_spec(void* env8941, void* id_8778) // lam8940 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8941);

//creating new make-kont closure
void** clo9169 = alloc_kont(lam8938_spec, 2);

//setting env list
clo9169[1] = id_8778;
clo9169[2] = decode_clo_array[3];
void* f_lam_8895 = encode_clo(clo9169);



//clo-app
map_spec(map, f_lam_8895, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

inline void map_fptr() // map -> generic version 
{
//reading env and args
void* const kont8894 = arg_buffer[2];
void* const proc = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8894)[0])(kont8894, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9170 = alloc_kont(lam8940_spec, 3);

//setting env list
clo9170[1] = proc;
clo9170[2] = lst;
clo9170[3] = kont8894;
void* f_lam_8896 = encode_clo(clo9170);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8896;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void map_spec(void* _8942, void* kont8894, void* proc, void* lst) // map 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8894)[0])(kont8894, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9171 = alloc_kont(lam8940_spec, 3);

//setting env list
clo9171[1] = proc;
clo9171[2] = lst;
clo9171[3] = kont8894;
void* f_lam_8896 = encode_clo(clo9171);



//clo-app
arg_buffer[1] = proc;
arg_buffer[2] = f_lam_8896;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(proc))[0])();
}

}

inline void lam8943_fptr() // lam8943 -> generic version 
{
//reading env
void* const env8944 = arg_buffer[1];
//reading env and args
void* const id_8787 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8944);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8787));
}

inline void lam8943_spec(void* env8944, void* id_8787) // lam8943 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8944);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8787));
}

inline void lam8945_fptr() // lam8945 -> generic version 
{
//reading env
void* const env8946 = arg_buffer[1];
//reading env and args
void* const id_8784 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8946);

//if-clause
if(is_true(id_8784))
{

//creating new make-kont closure
void** clo9172 = alloc_kont(lam8943_spec, 2);

//setting env list
clo9172[1] = apply_prim_car_1(decode_clo_array[2]);
clo9172[2] = decode_clo_array[3];
void* f_lam_8898 = encode_clo(clo9172);



//clo-app
filter_spec(filter, f_lam_8898, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[3], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void lam8945_spec(void* env8946, void* id_8784) // lam8945 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8946);

//if-clause
if(is_true(id_8784))
{

//creating new make-kont closure
void** clo9173 = alloc_kont(lam8943_spec, 2);

//setting env list
clo9173[1] = apply_prim_car_1(decode_clo_array[2]);
clo9173[2] = decode_clo_array[3];
void* f_lam_8898 = encode_clo(clo9173);



//clo-app
filter_spec(filter, f_lam_8898, decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}
else
{

//clo-app
filter_spec(filter, decode_clo_array[3], decode_clo_array[1], apply_prim_cdr_1(decode_clo_array[2]));
}

}

inline void filter_fptr() // filter -> generic version 
{
//reading env and args
void* const kont8897 = arg_buffer[2];
void* const op = arg_buffer[3];
void* const lst = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8897)[0])(kont8897, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9174 = alloc_kont(lam8945_spec, 3);

//setting env list
clo9174[1] = op;
clo9174[2] = lst;
clo9174[3] = kont8897;
void* f_lam_8899 = encode_clo(clo9174);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8899;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void filter_spec(void* _8947, void* kont8897, void* op, void* lst) // filter 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8897)[0])(kont8897, apply_prim_list_0());
}
else
{

//creating new make-kont closure
void** clo9175 = alloc_kont(lam8945_spec, 3);

//setting env list
clo9175[1] = op;
clo9175[2] = lst;
clo9175[3] = kont8897;
void* f_lam_8899 = encode_clo(clo9175);



//clo-app
arg_buffer[1] = op;
arg_buffer[2] = f_lam_8899;
arg_buffer[3] = apply_prim_car_1(lst);
numArgs = 3;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(op))[0])();
}

}

inline void drop_fptr() // drop -> generic version 
{
//reading env and args
void* const kont8900 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8999)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8900)[0])(kont8900, lst);
}
else
{

//clo-app
drop_spec(drop, kont8900, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9002));
}

}

inline void drop_spec(void* _8948, void* kont8900, void* lst, void* n) // drop 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8999)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8900)[0])(kont8900, lst);
}
else
{

//clo-app
drop_spec(drop, kont8900, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9002));
}

}

inline void lam8949_fptr() // lam8949 -> generic version 
{
//reading env
void* const env8950 = arg_buffer[1];
//reading env and args
void* const id_8796 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8950);

//clo-app
foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8796, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void lam8949_spec(void* env8950, void* id_8796) // lam8949 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8950);

//clo-app
foldl_spec(foldl, decode_clo_array[2], decode_clo_array[1], id_8796, apply_prim_cdr_1(decode_clo_array[3]));
}

inline void foldl_fptr() // foldl -> generic version 
{
//reading env and args
void* const kont8901 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8901)[0])(kont8901, acc);
}
else
{

//creating new make-kont closure
void** clo9176 = alloc_kont(lam8949_spec, 3);

//setting env list
clo9176[1] = fun;
clo9176[2] = kont8901;
clo9176[3] = lst;
void* f_lam_8902 = encode_clo(clo9176);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8902;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void foldl_spec(void* _8951, void* kont8901, void* fun, void* acc, void* lst) // foldl 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8901)[0])(kont8901, acc);
}
else
{

//creating new make-kont closure
void** clo9177 = alloc_kont(lam8949_spec, 3);

//setting env list
clo9177[1] = fun;
clo9177[2] = kont8901;
clo9177[3] = lst;
void* f_lam_8902 = encode_clo(clo9177);



//clo-app
arg_buffer[1] = fun;
arg_buffer[2] = f_lam_8902;
arg_buffer[3] = apply_prim_car_1(lst);
arg_buffer[4] = acc;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(fun))[0])();
}

}

inline void lam8952_fptr() // lam8952 -> generic version 
{
//reading env
void* const env8953 = arg_buffer[1];
//reading env and args
void* const id_8801 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8953);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8801;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void lam8952_spec(void* env8953, void* id_8801) // lam8952 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8953);

//clo-app
arg_buffer[1] = decode_clo_array[1];
arg_buffer[2] = decode_clo_array[2];
arg_buffer[3] = decode_clo_array[3];
arg_buffer[4] = id_8801;
numArgs = 4;
// generic else-case
reinterpret_cast<void (*)()>((decode_clo(decode_clo_array[1]))[0])();
}

inline void foldr_fptr() // foldr -> generic version 
{
//reading env and args
void* const kont8903 = arg_buffer[2];
void* const fun = arg_buffer[3];
void* const acc = arg_buffer[4];
void* const lst = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8903)[0])(kont8903, acc);
}
else
{

//creating new make-kont closure
void** clo9178 = alloc_kont(lam8952_spec, 3);

//setting env list
clo9178[1] = fun;
clo9178[2] = kont8903;
clo9178[3] = apply_prim_car_1(lst);
void* f_lam_8904 = encode_clo(clo9178);



//clo-app
foldr_spec(foldr, f_lam_8904, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void foldr_spec(void* _8954, void* kont8903, void* fun, void* acc, void* lst) // foldr 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8903)[0])(kont8903, acc);
}
else
{

//creating new make-kont closure
void** clo9179 = alloc_kont(lam8952_spec, 3);

//setting env list
clo9179[1] = fun;
clo9179[2] = kont8903;
clo9179[3] = apply_prim_car_1(lst);
void* f_lam_8904 = encode_clo(clo9179);



//clo-app
foldr_spec(foldr, f_lam_8904, fun, acc, apply_prim_cdr_1(lst));
}

}

inline void reverse_u45helper_fptr() // reverse-helper -> generic version 
{
//reading env and args
void* const kont8905 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const lst2 = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8905)[0])(kont8905, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8905, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_u45helper_spec(void* _8955, void* kont8905, void* lst, void* lst2) // reverse-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8905)[0])(kont8905, lst2);
}
else
{

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8905, apply_prim_cdr_1(lst), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void reverse_fptr() // reverse -> generic version 
{
//reading env and args
void* const kont8906 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8906, lst, apply_prim_list_0());
}

inline void reverse_spec(void* _8956, void* kont8906, void* lst) // reverse 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
reverse_u45helper_spec(reverse_u45helper, kont8906, lst, apply_prim_list_0());
}

inline void lam8957_fptr() // lam8957 -> generic version 
{
//reading env
void* const env8958 = arg_buffer[1];
//reading env and args
void* const id_8810 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8958);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8810));
}

inline void lam8957_spec(void* env8958, void* id_8810) // lam8957 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8958);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], apply_prim_cons_2(decode_clo_array[2], id_8810));
}

inline void append1_fptr() // append1 -> generic version 
{
//reading env and args
void* const kont8907 = arg_buffer[2];
void* const lhs = arg_buffer[3];
void* const rhs = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8907)[0])(kont8907, rhs);
}
else
{

//creating new make-kont closure
void** clo9180 = alloc_kont(lam8957_spec, 2);

//setting env list
clo9180[1] = kont8907;
clo9180[2] = apply_prim_car_1(lhs);
void* f_lam_8908 = encode_clo(clo9180);



//clo-app
append1_spec(append1, f_lam_8908, apply_prim_cdr_1(lhs), rhs);
}

}

inline void append1_spec(void* _8959, void* kont8907, void* lhs, void* rhs) // append1 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lhs)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8907)[0])(kont8907, rhs);
}
else
{

//creating new make-kont closure
void** clo9181 = alloc_kont(lam8957_spec, 2);

//setting env list
clo9181[1] = kont8907;
clo9181[2] = apply_prim_car_1(lhs);
void* f_lam_8908 = encode_clo(clo9181);



//clo-app
append1_spec(append1, f_lam_8908, apply_prim_cdr_1(lhs), rhs);
}

}

inline void lam8960_fptr() // lam8960 -> generic version 
{
//reading env
void* const env8961 = arg_buffer[1];
//reading env and args
void* const xy8812 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8961);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8812);
}

inline void lam8960_spec(void* env8961, void* xy8812) // lam8960 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8961);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8812);
}

inline void lam8962_fptr() // lam8962 -> generic version 
{
//reading env
void* const env8963 = arg_buffer[1];
//reading env and args
void* const id_8815 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8963);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8815);
}

inline void lam8962_spec(void* env8963, void* id_8815) // lam8962 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8963);

//clo-app
foldr_spec(foldr, decode_clo_array[2], append1, decode_clo_array[1], id_8815);
}

inline void lam8964_fptr() // lam8964 -> generic version 
{
//reading env
void* const env8965 = arg_buffer[1];
//reading env and args
void* const lsts = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8965);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9182 = alloc_kont(lam8960_spec, 1);

//setting env list
clo9182[1] = decode_clo_array[1];
void* f_lam_8910 = encode_clo(clo9182);



//clo-app
append1_spec(append1, f_lam_8910, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9183 = alloc_kont(lam8962_spec, 2);

//setting env list
clo9183[1] = apply_prim_list_0();
clo9183[2] = decode_clo_array[1];
void* f_lam_8911 = encode_clo(clo9183);



//clo-app
append1_spec(append1, f_lam_8911, apply_prim_list_2(decode_clo_array[2], decode_clo_array[3]), lsts);
}

}

inline void lam8964_spec(void* env8965, void* lsts) // lam8964 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8965);

//if-clause
if(is_true(apply_prim_null_u63_1(lsts)))
{

//creating new make-kont closure
void** clo9184 = alloc_kont(lam8960_spec, 1);

//setting env list
clo9184[1] = decode_clo_array[1];
void* f_lam_8910 = encode_clo(clo9184);



//clo-app
append1_spec(append1, f_lam_8910, decode_clo_array[2], decode_clo_array[3]);
}
else
{

//creating new make-kont closure
void** clo9185 = alloc_kont(lam8962_spec, 2);

//setting env list
clo9185[1] = apply_prim_list_0();
clo9185[2] = decode_clo_array[1];
void* f_lam_8911 = encode_clo(clo9185);



//clo-app
append1_spec(append1, f_lam_8911, apply_prim_list_2(decode_clo_array[2], decode_clo_array[3]), lsts);
}

}

void append_fptr() // append 
{
//reading env
void* const _8966 = arg_buffer[1];
//decoding closure array
void** decode_clo_array = nullptr;
void* vargs = nullptr;
if(is_cons(arg_buffer[2]))
{
//(apply e0 e0) case
vargs = arg_buffer[2];
}
else
{
//building cons cell
vargs = encode_null();
for(int i = numArgs; i >= 2; i--)
{
vargs = prim_cons(arg_buffer[i], vargs);

}

}


//creating new make-kont closure
void** clo9186 = alloc_kont(lam8964_spec, 3);

//setting env list
clo9186[1] = apply_prim_car_1(vargs);
clo9186[2] = apply_prim_car_1(apply_prim_cdr_1(vargs));
clo9186[3] = apply_prim_car_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs)));
void* f_lam_8912 = encode_clo(clo9186);


// kont-clo-app case
lam8964_spec(f_lam_8912, apply_prim_cdr_1(apply_prim_cdr_1(apply_prim_cdr_1(vargs))));
}

inline void lam8967_fptr() // lam8967 -> generic version 
{
//reading env
void* const env8968 = arg_buffer[1];
//reading env and args
void* const xy8818 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8968);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8818);
}

inline void lam8967_spec(void* env8968, void* xy8818) // lam8967 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8968);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[1])[0])(decode_clo_array[1], xy8818);
}

inline void take_u45helper_fptr() // take-helper -> generic version 
{
//reading env and args
void* const kont8913 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
void* const lst2 = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8999)))
{

//creating new make-kont closure
void** clo9187 = alloc_kont(lam8967_spec, 1);

//setting env list
clo9187[1] = kont8913;
void* f_lam_8914 = encode_clo(clo9187);



//clo-app
reverse_spec(reverse, f_lam_8914, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8913, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9002), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_u45helper_spec(void* _8969, void* kont8913, void* lst, void* n, void* lst2) // take-helper 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(n, int8999)))
{

//creating new make-kont closure
void** clo9188 = alloc_kont(lam8967_spec, 1);

//setting env list
clo9188[1] = kont8913;
void* f_lam_8914 = encode_clo(clo9188);



//clo-app
reverse_spec(reverse, f_lam_8914, lst2);
}
else
{

//clo-app
take_u45helper_spec(take_u45helper, kont8913, apply_prim_cdr_1(lst), apply_prim__u45_2(n, int9002), apply_prim_cons_2(apply_prim_car_1(lst), lst2));
}

}

inline void take_fptr() // take -> generic version 
{
//reading env and args
void* const kont8915 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const n = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8915, lst, n, apply_prim_list_0());
}

inline void take_spec(void* _8970, void* kont8915, void* lst, void* n) // take 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
take_u45helper_spec(take_u45helper, kont8915, lst, n, apply_prim_list_0());
}

inline void lam8971_fptr() // lam8971 -> generic version 
{
//reading env
void* const env8972 = arg_buffer[1];
//reading env and args
void* const id_8832 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8972);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8832));
}

inline void lam8971_spec(void* env8972, void* id_8832) // lam8971 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8972);
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(decode_clo_array[2])[0])(decode_clo_array[2], apply_prim_cons_2(decode_clo_array[1], id_8832));
}

inline void list_u45set_fptr() // list-set -> generic version 
{
//reading env and args
void* const kont8916 = arg_buffer[2];
void* const lst = arg_buffer[3];
void* const index = arg_buffer[4];
void* const value = arg_buffer[5];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int8999)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8916)[0])(kont8916, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9189 = alloc_kont(lam8971_spec, 2);

//setting env list
clo9189[1] = apply_prim_car_1(lst);
clo9189[2] = kont8916;
void* f_lam_8917 = encode_clo(clo9189);



//clo-app
list_u45set_spec(list_u45set, f_lam_8917, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int9002), value);
}

}

inline void list_u45set_spec(void* _8973, void* kont8916, void* lst, void* index, void* value) // list-set 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim__u61_2(index, int8999)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8916)[0])(kont8916, apply_prim_cons_2(value, apply_prim_cdr_1(lst)));
}
else
{

//creating new make-kont closure
void** clo9190 = alloc_kont(lam8971_spec, 2);

//setting env list
clo9190[1] = apply_prim_car_1(lst);
clo9190[2] = kont8916;
void* f_lam_8917 = encode_clo(clo9190);



//clo-app
list_u45set_spec(list_u45set, f_lam_8917, apply_prim_cdr_1(lst), apply_prim__u45_2(index, int9002), value);
}

}

inline void lam8974_fptr() // lam8974 -> generic version 
{
//reading env
void* const env8975 = arg_buffer[1];
//reading env and args
void* const id_8839 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8975);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8839;
numArgs = 4;
append_fptr();
}

inline void lam8974_spec(void* env8975, void* id_8839) // lam8974 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8975);

//clo-app
arg_buffer[1] = append;
arg_buffer[2] = decode_clo_array[1];
arg_buffer[3] = decode_clo_array[2];
arg_buffer[4] = id_8839;
numArgs = 4;
append_fptr();
}

inline void lam8976_fptr() // lam8976 -> generic version 
{
//reading env
void* const env8977 = arg_buffer[1];
//reading env and args
void* const id_8837 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8977);

//creating new make-kont closure
void** clo9191 = alloc_kont(lam8974_spec, 2);

//setting env list
clo9191[1] = decode_clo_array[1];
clo9191[2] = id_8837;
void* f_lam_8919 = encode_clo(clo9191);



//clo-app
flatten_spec(flatten, f_lam_8919, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void lam8976_spec(void* env8977, void* id_8837) // lam8976 
{
//decoding closure array
void** decode_clo_array = nullptr;
decode_clo_array = decode_clo(env8977);

//creating new make-kont closure
void** clo9192 = alloc_kont(lam8974_spec, 2);

//setting env list
clo9192[1] = decode_clo_array[1];
clo9192[2] = id_8837;
void* f_lam_8919 = encode_clo(clo9192);



//clo-app
flatten_spec(flatten, f_lam_8919, apply_prim_cdr_1(decode_clo_array[2]));
}

inline void flatten_fptr() // flatten -> generic version 
{
//reading env and args
void* const kont8918 = arg_buffer[2];
void* const lst = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8918)[0])(kont8918, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9193 = alloc_kont(lam8976_spec, 2);

//setting env list
clo9193[1] = kont8918;
clo9193[2] = lst;
void* f_lam_8920 = encode_clo(clo9193);



//clo-app
flatten_spec(flatten, f_lam_8920, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8918)[0])(kont8918, apply_prim_list_1(lst));
}

}

}

inline void flatten_spec(void* _8978, void* kont8918, void* lst) // flatten 
{
//decoding closure array
void** decode_clo_array = nullptr;

//if-clause
if(is_true(apply_prim_null_u63_1(lst)))
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8918)[0])(kont8918, apply_prim_list_0());
}
else
{

//if-clause
if(is_true(apply_prim_pair_u63_1(lst)))
{

//creating new make-kont closure
void** clo9194 = alloc_kont(lam8976_spec, 2);

//setting env list
clo9194[1] = kont8918;
clo9194[2] = lst;
void* f_lam_8920 = encode_clo(clo9194);



//clo-app
flatten_spec(flatten, f_lam_8920, apply_prim_car_1(lst));
}
else
{
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8918)[0])(kont8918, apply_prim_list_1(lst));
}

}

}

inline void addd_fptr() // addd -> generic version 
{
//reading env and args
void* const kont8921 = arg_buffer[2];
void* const y = arg_buffer[3];
void* const z = arg_buffer[4];
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8921)[0])(kont8921, apply_prim__u43_2(y, z));
}

inline void addd_spec(void* _8979, void* kont8921, void* y, void* z) // addd 
{
//decoding closure array
void** decode_clo_array = nullptr;
// kont-clo-app case
reinterpret_cast<void (*)(void*, void*)>(decode_clo(kont8921)[0])(kont8921, apply_prim__u43_2(y, z));
}

inline void call_fptr() // call -> generic version 
{
//reading env and args
void* const kont8922 = arg_buffer[2];
void* const x = arg_buffer[3];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
addd_spec(addd, kont8922, apply_prim__u43_2(x, x), int9001);
}

inline void call_spec(void* _8980, void* kont8922, void* x) // call 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
addd_spec(addd, kont8922, apply_prim__u43_2(x, x), int9001);
}

inline void brouhaha_main_fptr() // brouhaha_main -> generic version 
{
//reading env and args
void* const kont8923 = arg_buffer[2];
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
call_spec(call, kont8923, int9002);
}

inline void brouhaha_main_spec(void* _8981, void* kont8923) // brouhaha_main 
{
//decoding closure array
void** decode_clo_array = nullptr;

//clo-app
call_spec(call, kont8923, int9002);
}

int main(int argc, char **argv)
{
mp_set_memory_functions(&allocate_function,
                            &reallocate_function,
                            &deallocate_function);

// initializing global constants in the main
int8999 = reinterpret_cast<void *>(encode_int(0));
bool_t8991 = encode_bool(true);
int9002 = reinterpret_cast<void *>(encode_int(1));
bool_f8992 = encode_bool(false);
int8987 = reinterpret_cast<void *>(encode_int(2));
int9001 = reinterpret_cast<void *>(encode_int(19));



//making a call to the brouhaha main function to kick off our C++ emission.
void** f_halt_clo = alloc_kont(fhalt_spec, 0);
void* fhalt_clo = encode_clo(f_halt_clo);
arg_buffer[2] = fhalt_clo;

// calling next procedure using a function pointer
brouhaha_main_spec(nullptr, fhalt_clo);
}

