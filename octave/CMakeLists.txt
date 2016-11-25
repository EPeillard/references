
project(test)
cmake_minimum_required(VERSION 2.6)


set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(Octave REQUIRED)

include_directories(${OCTAVE_INCLUDE_DIR})

add_executable(hello main.cpp)

#find_library(octinerp

target_link_libraries (hello octave octinterp)


#include_directories(/usr/include/octave-4.0.0)
#include_directories(/usr/include/octave-4.0.0/octave)

#target_link_libraries (hello octinterp)
