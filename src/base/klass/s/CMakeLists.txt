cmake_minimum_required(VERSION 3.0)

project(klass)
include_directories("../i")
add_library(klass SHARED klass.cpp)
