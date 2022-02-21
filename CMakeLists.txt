cmake_minimum_required(VERSION 3.21)
project(homeworkt C)

set(CMAKE_C_STANDARD 99)

add_executable(homeworkt main.c calculator.c op.c op.h prim.c)
