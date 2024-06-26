add_library(testing testing.hpp)
set_target_properties(testing PROPERTIES LINKER_LANGUAGE CXX)
# Define a function to conditionally add subdirectories
function(add_subdirectory_if_exists dir)
  # Construct the full path to the directory's CMakeLists.txt file
  set(subdir_cmake_lists "${CMAKE_CURRENT_SOURCE_DIR}/${dir}/CMakeLists.txt")
  
  # Check if the CMakeLists.txt file exists
  if(EXISTS "${subdir_cmake_lists}")
    # The file exists, add the subdirectory to the build
    add_subdirectory(${dir})
    message(STATUS "Added ${dir} to the build")
  else()
    # The file does not exist, print a status message
    #    message(STATUS "Skipping ${dir}: CMakeLists.txt not found")
  endif()
endfunction()

add_subdirectory_if_exists(easy)
add_subdirectory_if_exists(and)
add_subdirectory_if_exists(count_divisors)
add_subdirectory_if_exists(eq)
add_subdirectory_if_exists(equal)
add_subdirectory_if_exists(even)
add_subdirectory_if_exists(fact)
add_subdirectory_if_exists(filter)
add_subdirectory_if_exists(float)
add_subdirectory_if_exists(fold_r)
add_subdirectory_if_exists(foldl_style)
add_subdirectory_if_exists(hash)
add_subdirectory_if_exists(hash_count)
add_subdirectory_if_exists(hash_has_key)
add_subdirectory_if_exists(hash_ref)
add_subdirectory_if_exists(hash_set)
add_subdirectory_if_exists(hash_keys)
add_subdirectory_if_exists(hash_stress)
add_subdirectory_if_exists(set)
add_subdirectory_if_exists(list)
add_subdirectory_if_exists(set_to_list)
add_subdirectory_if_exists(list_to_set)
add_subdirectory_if_exists(setadd)
add_subdirectory_if_exists(set_member_huh)
add_subdirectory_if_exists(set_remove)
add_subdirectory_if_exists(set_count)
add_subdirectory_if_exists(interleave)
add_subdirectory_if_exists(lambda)
add_subdirectory_if_exists(length)
add_subdirectory_if_exists(member)
add_subdirectory_if_exists(minus_float)
add_subdirectory_if_exists(modulo)
add_subdirectory_if_exists(multiply)
add_subdirectory_if_exists(multiply_float)
add_subdirectory_if_exists(nested_if)
add_subdirectory_if_exists(not)
add_subdirectory_if_exists(null)
add_subdirectory_if_exists(or)
add_subdirectory_if_exists(power)
add_subdirectory_if_exists(reverse)
add_subdirectory_if_exists(string)
add_subdirectory_if_exists(sym_equal)
add_subdirectory_if_exists(sym_gt)
add_subdirectory_if_exists(sym_gteq)
add_subdirectory_if_exists(sym_lt)
add_subdirectory_if_exists(sym_lteq)
add_subdirectory_if_exists(take)
add_subdirectory_if_exists(var)
add_subdirectory_if_exists(yes)
add_subdirectory_if_exists(let)
add_subdirectory_if_exists(error)
add_subdirectory_if_exists(to_float)
add_subdirectory_if_exists(to_int)
add_subdirectory_if_exists(cons)
add_subdirectory_if_exists(car)
add_subdirectory_if_exists(cdr)
add_subdirectory_if_exists(string_huh)
add_subdirectory_if_exists(string_length)
add_subdirectory_if_exists(string_ref)
add_subdirectory_if_exists(string_append)
add_subdirectory_if_exists(string_to_list)
add_subdirectory_if_exists(substring)
add_subdirectory_if_exists(inner_hashes)
add_subdirectory_if_exists(apply)
add_subdirectory_if_exists(transitive_closure)
add_subdirectory_if_exists(letstar)
add_subdirectory_if_exists(vararg)
add_subdirectory_if_exists(inline_test)
add_subdirectory_if_exists(plus)
add_subdirectory_if_exists(minus)
add_subdirectory_if_exists(division)
add_subdirectory_if_exists(double_inner)
add_subdirectory_if_exists(exact_floor)
add_subdirectory_if_exists(exact_ceiling)
add_subdirectory_if_exists(exact_round)
add_subdirectory_if_exists(abs)
add_subdirectory_if_exists(max)
add_subdirectory_if_exists(min)
add_subdirectory_if_exists(expt)
add_subdirectory_if_exists(remainder)
add_subdirectory_if_exists(quotient)
add_subdirectory_if_exists(random)
add_subdirectory_if_exists(symbol_huh)
add_subdirectory_if_exists(pair_huh)
add_subdirectory_if_exists(sqrt)
add_subdirectory_if_exists(positive_huh)
add_subdirectory_if_exists(negative_huh)
add_subdirectory_if_exists(cond)
add_subdirectory_if_exists(call_cc)
add_subdirectory_if_exists(app)
add_subdirectory_if_exists(testing)
add_subdirectory_if_exists(merge_sort)
add_subdirectory_if_exists(benchmark_nqueens)
add_subdirectory_if_exists(benchmark_fib)
add_subdirectory_if_exists(benchmark_fibfp)
add_subdirectory_if_exists(benchmark_primes)
add_subdirectory_if_exists(benchmark_pi)
add_subdirectory_if_exists(benchmark_pnpoly)
add_subdirectory_if_exists(benchmark_mazefun)
add_subdirectory_if_exists(benchmark_sum)
add_subdirectory_if_exists(benchmark_sumfp)
add_subdirectory_if_exists(benchmark_tak)
add_subdirectory_if_exists(benchmark_takl)
add_subdirectory_if_exists(benchmark_ntakl)
add_subdirectory_if_exists(benchmark_cpstak)
add_subdirectory_if_exists(benchmark_deriv)
add_subdirectory_if_exists(benchmark_ack)
add_subdirectory_if_exists(benchmark_sudoku)
add_subdirectory_if_exists(benchmark_uva_paper)
add_subdirectory_if_exists(benchmark_uva_paper_two)
