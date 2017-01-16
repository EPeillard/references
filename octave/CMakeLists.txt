
project(test)
cmake_minimum_required(VERSION 2.6)


set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(Octave REQUIRED)
find_package(MPI REQUIRED)

include_directories(${OCTAVE_INCLUDE_DIR})
include_directories(${MPI_INCLUDE_PATH})

add_executable(hello main.cpp)

#find_library(octinerp

target_link_libraries (hello octave octinterp ${MPI_LIBRARIES})


#include_directories(/usr/include/octave-4.0.0)
#include_directories(/usr/include/octave-4.0.0/octave)

#target_link_libraries (hello octinterp)
