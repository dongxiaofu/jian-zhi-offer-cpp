cmake_minimum_required(VERSION 3.16)
project(jian_zhi_offer_cpp)

set(CMAKE_CXX_STANDARD 14)

#字符串
add_executable(test_char
        string/replace_empty_string/demo/test_char.c)

add_executable(test_replace_space_01
        string/replace_empty_string/01/Solution.h
        string/replace_empty_string/01/Solution.cpp
        string/replace_empty_string/01/test_replace_space.cpp)

add_executable(test_find_first_appearing_once
        string/find_first_appearing_once/01/Solution.h
        string/find_first_appearing_once/01/Solution.cpp
        string/find_first_appearing_once/01/test.cpp)

add_executable(test_check_str_is_numberic
        string/check_str_is_numberic/01/Solution.h
        string/check_str_is_numberic/01/Solution.cpp
        string/check_str_is_numberic/01/test.cpp)

add_executable(test_regular_expression
        string/regular_expression/01/Solution.h
        string/regular_expression/01/Solution.cpp
        string/regular_expression/01/test.cpp)

add_executable(test_first_not_repeationg_char_01
        string/first_not_repeating_char/01/Solution.cpp
        string/first_not_repeating_char/01/Solution.h
        string/first_not_repeating_char/01/test.cpp)

add_executable(test_reverse_sentence_01
        string/reverse_sentence/01/Solution.cpp
        string/reverse_sentence/01/Solution.h
        string/reverse_sentence/01/test.cpp)

add_executable(test_left_rotate_string_01
        string/left_rotate_string/01/Solution.h
        string/left_rotate_string/01/Solution.cpp
        string/left_rotate_string/01/test.cpp)

add_executable(test_left_rotate_string_02
        string/left_rotate_string/02/Solution.h
        string/left_rotate_string/02/Solution.cpp
        string/left_rotate_string/02/test.cpp)

add_executable(test_str_to_int_01
        string/str_to_int/01/Solution.h
        string/str_to_int/01/Solution.cpp
        string/str_to_int/01/test.cpp)

add_executable(test_str_to_int_02
        string/str_to_int/02/Solution.h
        string/str_to_int/02/Solution.cpp
        string/str_to_int/02/test.cpp)

add_executable(test_str_to_int_03
        string/str_to_int/03/Solution.h
        string/str_to_int/03/Solution.cpp
        string/str_to_int/03/test.cpp)

add_executable(test_permutation_01
        string/permutation/01/Solution.h
        string/permutation/01/Solution.cpp
        string/permutation/01/test.cpp)

add_executable(test_permutation_02
        string/permutation/02/Solution.h
        string/permutation/02/Solution.cpp
        string/permutation/02/test.cpp)

add_executable(test_longest_duplicate_child_str_01
        string/longest_duplicate_child_str/01/Solution.h
        string/longest_duplicate_child_str/01/Solution.cpp
        string/longest_duplicate_child_str/01/test.cpp)

add_executable(test_string_demo
        string/reverse_sentence/demo/string_demo.cpp)

add_executable(test_substr_demo
        string/permutation/01/demo/substr_demo.cpp)

#位运算
add_executable(test_number_of_one
        bitwise/01/Solution.cpp
        bitwise/01/Solution.h
        bitwise/01/test.cpp)

add_executable(test_cut_rope_01
        dynamic-programming/cut_rope/01/Solution.cpp
        dynamic-programming/cut_rope/01/Solution.h
        dynamic-programming/cut_rope/01/test.cpp)

add_executable(test_has_path_in_matrix_01
        back-tracking/hash_path_in_matrix/01/Solution.cpp
        back-tracking/hash_path_in_matrix/01/Solution.h
        back-tracking/hash_path_in_matrix/01/test.cpp)

add_executable(test_robot_run_range_01
        back-tracking/robot-run-range/01/Solution.h
        back-tracking/robot-run-range/01/Solution.cpp
        back-tracking/robot-run-range/01/test.cpp)

#数组
add_executable(test_find_in_two_dimension
        array/find_in_two_dimension/01/Solution.h
        array/find_in_two_dimension/01/Solution.cpp
        array/find_in_two_dimension/01/test.cpp)

add_executable(test_find_duplication_number_in_array_01
        array/find_duplication_number_in_array/01/Solution.h
        array/find_duplication_number_in_array/01/Solution.cpp
        array/find_duplication_number_in_array/01/test.cpp)

add_executable(test_min_in_rotate_array_01
        array/min_in_rotate_array/01/Solution.h
        array/min_in_rotate_array/01/Solution.cpp
        array/min_in_rotate_array/01/test.cpp)

add_executable(test_more_than_half_num_01
        array/more_than_half_num/01/Solution.h
        array/more_than_half_num/01/Solution.cpp
        array/more_than_half_num/01/test.cpp)

add_executable(test_get_least_numbers_01
        array/get_least_numbers/01/Solution.h
        array/get_least_numbers/01/Solution.cpp
        array/get_least_numbers/01/test.cpp)

add_executable(test_find_greatest_sum_of_sub_array_01
        array/find_greatest_sum_of_sub_array/01/Solution.h
        array/find_greatest_sum_of_sub_array/01/Solution.cpp
        array/find_greatest_sum_of_sub_array/01/test.cpp)

add_executable(test_find_greatest_sum_of_sub_array_02
        array/find_greatest_sum_of_sub_array/02/Solution.h
        array/find_greatest_sum_of_sub_array/02/Solution.cpp
        array/find_greatest_sum_of_sub_array/02/test.cpp)

add_executable(test_get_number_of_k_01
        array/get_number_of_k/01/Solution.h
        array/get_number_of_k/01/Solution.cpp
        array/get_number_of_k/01/test.cpp)

add_executable(test_get_number_of_k_02
        array/get_number_of_k/02/Solution.h
        array/get_number_of_k/02/Solution.cpp
        array/get_number_of_k/02/test.cpp)

add_executable(test_find_number_appear_once_01
        array/find_number_appear_once/01/Solution.h
        array/find_number_appear_once/01/Solution.cpp
        array/find_number_appear_once/01/test.cpp)

add_executable(test_find_number_appear_once_02
        array/find_number_appear_once/02/Solution.h
        array/find_number_appear_once/02/Solution.cpp
        array/find_number_appear_once/02/test.cpp)

add_executable(test_two_01
        array/two_sum/01/Solution.h
        array/two_sum/01/Solution.cpp
        array/two_sum/01/test.cpp)

add_executable(test_n_sum_01
        array/n_sum/01/Solution.h
        array/n_sum/01/Solution.cpp
        array/n_sum/01/test.cpp)

add_executable(test_find-two-dimensional-array_01
        array/find-two-dimensional-array/01/Solution.h
        array/find-two-dimensional-array/01/Solution.cpp
        array/find-two-dimensional-array/01/test.cpp)

add_executable(test_multiply_01
        array/multiply/01/Solution.h
        array/multiply/01/Solution.cpp
        array/multiply/01/test.cpp)

add_executable(test_vector_demo
        array/get_least_numbers/demo/vector_demo.cpp)

add_executable(test_pointer_demo
        array/find_number_appear_once/01/demo/demo_pointer.cpp)

#递归和循环
add_executable(test_recursion_repeat_01
        recursion_repeat/cover_matrix/01/Solution.cpp
        recursion_repeat/cover_matrix/01/Solution.h
        recursion_repeat/cover_matrix/01/test.cpp)

add_executable(test_cover_matrix_02
        recursion_repeat/cover_matrix/02/Solution.cpp
        recursion_repeat/cover_matrix/02/Solution.h
        recursion_repeat/cover_matrix/02/test.cpp)

add_executable(test_fibonacci_01
        recursion_repeat/fibonacci/01/Solution.cpp
        recursion_repeat/fibonacci/01/Solution.h
        recursion_repeat/fibonacci/01/test.cpp)

add_executable(test_difficutl_step_jumping_01
        recursion_repeat/difficutl_step_jumping/01/Solution.h
        recursion_repeat/difficutl_step_jumping/01/Solution.cpp
        recursion_repeat/difficutl_step_jumping/01/test.cpp)

add_executable(test_difficutl_step_jumping_02
        recursion_repeat/difficutl_step_jumping/02/Solution.h
        recursion_repeat/difficutl_step_jumping/02/Solution.cpp
        recursion_repeat/difficutl_step_jumping/02/test.cpp)

#代码的完整性
add_executable(test_exponent_01
        code_completeness/exponent/01/Solution.h
        code_completeness/exponent/01/Solution.cpp
        code_completeness/exponent/01/test.cpp)

add_executable(test_exponent_02
        code_completeness/exponent/02/Solution.h
        code_completeness/exponent/02/Solution.cpp
        code_completeness/exponent/02/test.cpp)

add_executable(test_exponent_03
        code_completeness/exponent/03/Solution.h
        code_completeness/exponent/03/Solution.cpp
        code_completeness/exponent/03/test.cpp)

add_executable(test_odd_in_front_of_even_01
        code_completeness/odd_in_front_of_even/01/Solution.h
        code_completeness/odd_in_front_of_even/01/Solution.cpp
        code_completeness/odd_in_front_of_even/01/test.cpp)

add_executable(test_odd_in_front_of_even_02
        code_completeness/odd_in_front_of_even/02/Solution.h
        code_completeness/odd_in_front_of_even/02/Solution.cpp
        code_completeness/odd_in_front_of_even/02/test.cpp)

#链表
add_executable(test_print_linked_list_from_tail_to_head_01
        linked_list/print_linked_list_from_tail_to_head/01/Solution.h
        linked_list/print_linked_list_from_tail_to_head/01/Solution.cpp
        linked_list/print_linked_list_from_tail_to_head/01/test.cpp)

add_executable(test_delete_duplication_01
        linked_list/delete_duplication/01/Solution.h
        linked_list/delete_duplication/01/Solution.cpp
        linked_list/delete_duplication/01/test.cpp)

add_executable(test_entry_of_ring_01
        linked_list/entry_of_ring/01/Solution.h
        linked_list/entry_of_ring/01/Solution.cpp
        linked_list/entry_of_ring/01/test.cpp)

add_executable(test_reverse_linked_list_01
        linked_list/reverse_linked_list/01/Solution.h
        linked_list/reverse_linked_list/01/Solution.cpp
        linked_list/reverse_linked_list/01/test.cpp)

add_executable(test_reverse_linked_list_02
        linked_list/reverse_linked_list/02/Solution.h
        linked_list/reverse_linked_list/02/Solution.cpp
        linked_list/reverse_linked_list/02/test.cpp)

add_executable(test_copy_complicated_linked_list_01
        linked_list/copy_complicated_linked_list/01/Solution.h
        linked_list/copy_complicated_linked_list/01/Solution.cpp
        linked_list/copy_complicated_linked_list/01/test.cpp)

add_executable(test_copy_complicated_linked_list_02
        linked_list/copy_complicated_linked_list/02/Solution.h
        linked_list/copy_complicated_linked_list/02/Solution.cpp
        linked_list/copy_complicated_linked_list/02/test.cpp)

add_executable(test_kth_node_from_tail_in_linked_list
        linked_list/kth_node_from_tail_in_linked_list/01/Solution.h
        linked_list/kth_node_from_tail_in_linked_list/01/Solution.cpp
        linked_list/kth_node_from_tail_in_linked_list/01/test.cpp)

add_executable(test_merge_sorted_linked_list_01
        linked_list/merge_sorted_linked_list/01/Solution.h
        linked_list/merge_sorted_linked_list/01/Solution.cpp
        linked_list/merge_sorted_linked_list/01/test.cpp)

add_executable(test_find_first_common_node_01
        linked_list/find_first_common_node/01/Solution.h
        linked_list/find_first_common_node/01/Solution.cpp
        linked_list/find_first_common_node/01/test.cpp)

add_executable(test_find_first_common_node_02
        linked_list/find_first_common_node/02/Solution.h
        linked_list/find_first_common_node/02/Solution.cpp
        linked_list/find_first_common_node/02/test.cpp)

add_executable(test_last_remaining_01
        linked_list/last_remaining/01/Solution.h
        linked_list/last_remaining/01/Solution.cpp
        linked_list/last_remaining/01/test.cpp)

add_executable(test_last_remaining_02
        linked_list/last_remaining/02/Solution.h
        linked_list/last_remaining/02/Solution.cpp
        linked_list/last_remaining/02/test.cpp)

#队列和栈
add_executable(test_stack_demo
        queue_and_stack/implement_queue_with_two_stacks/01/demo/stack_demo.cpp)

add_executable(test_implement_queue_with_two_stacks_01
        queue_and_stack/implement_queue_with_two_stacks/01/Solution.h
        queue_and_stack/implement_queue_with_two_stacks/01/Solution.cpp
        queue_and_stack/implement_queue_with_two_stacks/01/test.cpp)

add_executable(test_max_in_sliding_window_01
        queue_and_stack/max_in_sliding_window/01/Solution.h
        queue_and_stack/max_in_sliding_window/01/Solution.cpp
        queue_and_stack/max_in_sliding_window/01/test.cpp)

add_executable(test_max_in_sliding_window_02
        queue_and_stack/max_in_sliding_window/02/Solution.h
        queue_and_stack/max_in_sliding_window/02/Solution.cpp
        queue_and_stack/max_in_sliding_window/02/test.cpp)

add_executable(test_stack_push_pop_01
        queue_and_stack/stack_push_pop/01/Solution.h
        queue_and_stack/stack_push_pop/01/Solution.cpp
        queue_and_stack/stack_push_pop/01/test.cpp)

add_executable(test_min_in_stack_01
        queue_and_stack/min_in_stack/01/Solution.h
        queue_and_stack/min_in_stack/01/Solution.cpp
        queue_and_stack/min_in_stack/01/test.cpp)

add_executable(test_min_in_stack_02
        queue_and_stack/min_in_stack/02/Solution.h
        queue_and_stack/min_in_stack/02/Solution.cpp
        queue_and_stack/min_in_stack/02/test.cpp)

#查找和数学
add_executable(test_number_of_one_between_1_and_n_01
        find_and_math/number_of_one_between_1_and_n/01/Solution.h
        find_and_math/number_of_one_between_1_and_n/01/Solution.cpp
        find_and_math/number_of_one_between_1_and_n/01/test.cpp)

#堆
add_executable(test_get_median_01
        heap/get_median/01/Solution.h
        heap/get_median/01/Solution.cpp
        heap/get_median/01/test.cpp)

add_executable(test_heap_demo_01
        heap/demo/01/demo.cpp)

#树
add_executable(test_preorder_traversal_01
        tree/preorder_traversal/01/Solution.h
        tree/preorder_traversal/01/Solution.cpp
        tree/preorder_traversal/01/test.cpp)

add_executable(test_print_tree_by_line_01
        tree/print_tree_by_line/01/Solution.h
        tree/print_tree_by_line/01/Solution.cpp
        tree/print_tree_by_line/01/test.cpp)

add_executable(test_reconstruct_01
        tree/reconstruct/01/Solution.h
        tree/reconstruct/01/Solution.cpp
        tree/reconstruct/01/test.cpp)

add_executable(test_print_zhi_01
        tree/print_zhi/01/Solution.h
        tree/print_zhi/01/Solution.cpp
        tree/print_zhi/01/test.cpp)

add_executable(test_serialize_tree_01
        tree/serialize/01/Solution.h
        tree/serialize/01/Solution.cpp
        tree/serialize/01/test.cpp)

add_executable(test_serialize_tree_02
        tree/serialize/02/Solution.h
        tree/serialize/02/Solution.cpp
        tree/serialize/02/test.cpp)

add_executable(test_kth_node_01
        tree/kth_node/01/Solution.h
        tree/kth_node/01/Solution.cpp
        tree/kth_node/01/test.cpp)

add_executable(test_is_symmerical_01
        tree/is_symmerical/01/Solution.h
        tree/is_symmerical/01/Solution.cpp
        tree/is_symmerical/01/test.cpp)

add_executable(test_lowest_common_ancestor_01
        tree/lowest_common_ancestor/01/Solution.cpp
        tree/lowest_common_ancestor/01/Solution.h
        tree/lowest_common_ancestor/01/test.cpp)

add_executable(test_is_sub_structure_01
        tree/is_sub_structure/01/Solution.h
        tree/is_sub_structure/01/Solution.cpp
        tree/is_sub_structure/01/test.cpp)

add_executable(test_ugly_number_01
        exhaustion/ugly_number/01/Solution.h
        exhaustion/ugly_number/01/Solution.cpp
        exhaustion/ugly_number/01/test.cpp)

add_executable(test_ugly_number_02
        exhaustion/ugly_number/02/Solution.h
        exhaustion/ugly_number/02/Solution.cpp
        exhaustion/ugly_number/02/test.cpp)