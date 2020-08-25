cmake_minimum_required(VERSION 3.14.0)
set(PROJECT_NAME monotonic_array)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME}
        main.cpp
        )