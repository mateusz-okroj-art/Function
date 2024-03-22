cmake_minimum_required(VERSION 3.20)

project(Function)

add_library(Function INTERFACE src/Function.hpp)

add_executable(test_Function src/test.cpp)
target_link_libraries(test_Function PRIVATE Function)