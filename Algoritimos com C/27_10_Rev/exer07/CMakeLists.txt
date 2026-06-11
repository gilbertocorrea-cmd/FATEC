cmake_minimum_required(VERSION 4.0)
project(exer06 C)

set(CMAKE_C_STANDARD 11)

add_executable(exer06 main.c
        fibonacci.h
        fibonacci.c)
