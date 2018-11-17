cmake_minimum_required(VERSION 3.12)
project(calculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(calculator main.cpp Calculator.h Calculator.cpp)
add_executable(test ./test/main.cpp ./test/test.cpp)

add_subdirectory(./googletest)

target_include_directories(test PUBLIC ./googletest/include)
target_link_libraries(test gtest gtest_main)