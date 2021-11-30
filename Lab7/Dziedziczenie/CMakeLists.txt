cmake_minimum_required(VERSION 3.16)

project(dziedziczenie)
include_directories(include)

add_executable(dziedzicznie src/main.cpp src/GeometricShape.cpp src/Circle.cpp src/Square.cpp)