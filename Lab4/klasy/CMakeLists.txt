cmake_minimum_required(VERSION 3.16)

project(klasy)

set(CMAKE_CXX_STANDARD 17)

include_directories(header)

add_executable(klasy
        src/main.cpp
        src/Cuboid.cpp
        header/Cuboid.h
        src/Sphere.cpp
        header/Sphere.h
        src/QuadraticFunction.cpp
        header/QuadraticFunction.h
        src/Student.cpp
        header/Student.h
        src/Point.cpp
        header/Point.h
        src/Figure.cpp
        header/Figure.h)