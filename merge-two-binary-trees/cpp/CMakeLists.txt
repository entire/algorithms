cmake_minimum_required(VERSION 3.15.3)
project(merge_binary)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_BUILD_TYPE RelWithDebInfo)

add_executable(merge_binary
        main.cpp
        )