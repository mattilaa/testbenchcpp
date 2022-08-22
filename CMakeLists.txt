cmake_minimum_required(VERSION 3.8)

project(TestBench
    VERSION 0.1
    DESCRIPTION "Setup for unit testing and benchmarking C++"
    LANGUAGES CXX
    )

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(tests)
