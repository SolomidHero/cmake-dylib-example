cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 14)
project(B)

set(SOURCE_EXE lib.cpp)
add_library(lib_B SHARED lib.h lib.cpp)
