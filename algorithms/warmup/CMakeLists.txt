cmake_minimum_required(VERSION 2.8.4)
project(hacker_rank)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

add_executable(solve_me_first solve_me_first.c)
add_executable(lonely_integer lonely_integer.c)
add_executable(flipping_bits flipping_bits.c)
add_executable(maximizing_xor maximizing_xor.c)
