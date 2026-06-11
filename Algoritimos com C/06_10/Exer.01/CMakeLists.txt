cmake_minimum_required(VERSION 4.0)
project(Exer_01 C)

set(CMAKE_C_STANDARD 11)

add_executable(Exer_01 main.c
        adicao.c
        adicao.h
        subtracao.h
        subtracao.c
        divisao.h
        divisao.c
        multiplicacao.h
        multiplicacao.c)
