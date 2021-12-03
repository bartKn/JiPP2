cmake_minimum_required(VERSION 3.16)

project(notes)
include_directories(include)

add_executable(notes src/main.cpp src/Note.cpp src/TextNote.cpp src/ListNote.cpp src/NoteDirector.cpp)