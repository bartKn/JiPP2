cmake_minimum_required(VERSION 3.16)

project(node)
include_directories(include)

add_executable(node src/main.cpp src/Node.cpp)