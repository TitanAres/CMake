cmake_minimum_required(VERSION 2.8)


find_package(VXL)
include_directories(${VXL_VCL_INCLUDE_DIRS})
include_directories(${VXL_CORE_INCLUDE_DIRS})

project(imgl)

set(sources helloworld.cxx helloworld.h)
add_library(hellolib helloworld.cxx helloworld.h)
target_include_directories(hellolib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(examples)
add_executable(test test.cxx)
target_link_libraries(test hellolib)
