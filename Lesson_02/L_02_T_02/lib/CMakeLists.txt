cmake_minimum_required(VERSION 2.9)
project(Lib)
set(SOURCES Apple.cpp)
set(HEADERS Fruit.h Apple.h Banana.h GrannySmith.h)
add_library(lib Apple.cpp Banana.h GrannySmith.h)
target_include_directories(lib PUBLIC ./)

