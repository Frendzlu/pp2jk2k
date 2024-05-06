cmake_minimum_required(VERSION 3.28)
project(cw3 CXX)

set(CMAKE_CXX_STANDARD 23)

add_executable(cw3 main.cpp
        ComplexNumber.cpp
        ComplexNumber.h
        functions.cpp
        functions.h)
