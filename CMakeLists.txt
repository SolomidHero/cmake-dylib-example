cmake_minimum_required(VERSION 3.4)
set(CMAKE_CXX_STANDARD 14)
project(LibExample)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

execute_process(COMMAND python3 ${PROJECT_SOURCE_DIR}/A/preparing.py)

include_directories(${PROJECT_SOURCE_DIR})
add_subdirectory(A)
add_subdirectory(B)

add_executable(build B/lib.cpp C/main.cpp)