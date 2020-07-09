cmake_minimum_required(VERSION 3.15.3)
set(PROJECT_NAME reverse_linkedlist)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_BUILD_TYPE RelWithDebInfo)

add_executable(${PROJECT_NAME}
        main.cpp
        )