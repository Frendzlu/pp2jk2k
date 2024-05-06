cmake_minimum_required(VERSION 3.28)
project(cw8)

set(CMAKE_CXX_STANDARD 23)

add_executable(cw8 main.cpp
        Shape.cpp
        Shape.h
        Rectangle.cpp
        Rectangle.h
        Square.cpp
        Square.h
        Circle.cpp
        Circle.h)
