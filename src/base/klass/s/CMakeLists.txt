cmake_minimum_required(VERSION 2.6)

project(klass)
include_directories("../i")
add_library(klass SHARED klass.cpp)
