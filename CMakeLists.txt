cmake_minimum_required(VERSION 3.23)
project(3207_Lab_Introduction C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(3207_Lab_Introduction
        print_random.c
        random.c
        random.h)
