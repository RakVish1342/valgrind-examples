cmake_minimum_required(VERSION 3.20)
project("valgrind-examples")

add_executable(valgrind_examples src/example.c)
target_include_directories(valgrind_examples
                           PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)
