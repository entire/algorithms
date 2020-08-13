cmake_minimum_required(VERSION 3.15.3)
set(PROJECT_NAME default)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME}
        main.cpp
        )