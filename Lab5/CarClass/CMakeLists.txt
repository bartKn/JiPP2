cmake_minimum_required(VERSION 3.16)

project(car)
include_directories(include)

add_executable(car src/main.cpp src/Car.cpp)