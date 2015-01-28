cmake_minimum_required(VERSION 2.8.4)
project(hacker_rank)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

set(SOURCE_FILES main.c add.c)
add_executable(solve_me_first ${SOURCE_FILES})

