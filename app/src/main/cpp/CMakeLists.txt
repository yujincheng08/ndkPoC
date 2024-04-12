cmake_minimum_required(VERSION 3.28)

project(test CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_SCAN_FOR_MODULES ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_library(test SHARED foo.cc)

target_sources(test
        PRIVATE
        FILE_SET CXX_MODULES FILES
        bar.cxx
)
