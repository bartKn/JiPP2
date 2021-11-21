cmake_minimum_required(VERSION 3.16)

project(triangle)
include_directories(include ../Node/include)

add_executable(triangle src/main.cpp src/Triangle.cpp ../Node/src/Node.cpp)
