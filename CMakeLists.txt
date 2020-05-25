cmake_minimum_required(VERSION 3.16)
project(jian_zhi_offer_cpp)

set(CMAKE_CXX_STANDARD 14)

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

add_executable(test_number_of_one
        bitwise/01/Solution.cpp
        bitwise/01/Solution.h
        bitwise/01/test.cpp)
