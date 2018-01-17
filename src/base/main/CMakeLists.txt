cmake_minimum_required(VERSION 3.0)

project(main)
include_directories(../klass/i ../glass/i)
add_executable(main main.cpp)
target_link_libraries(main klass glass)
