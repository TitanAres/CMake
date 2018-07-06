cmake_minimum_required(VERSION 2.8)

find_package(VXL)
include_directories(${VXL_VCL_INCLUDE_DIRS})
include_directories(${VXL_CORE_INCLUDE_DIRS})

project(cmake)
MESSAGE(STATUS "BINARY dir " ${CMAKE_BINARY_DIR})
MESSAGE(STATUS "SOURCE dir " ${CMAKE_SOURCE_DIR})

ADD_SUBDIRECTORY(src bin)
