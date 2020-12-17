cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 14)
project(lib_A)

add_library(lib_A SHARED index.h)

# https://stackoverflow.com/questions/11801186/cmake-unable-to-determine-linker-language-with-c
set_target_properties(lib_A PROPERTIES LINKER_LANGUAGE CXX)