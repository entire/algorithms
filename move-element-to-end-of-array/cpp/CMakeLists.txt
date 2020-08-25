cmake_minimum_required(VERSION 3.14.0)
set(PROJECT_NAME move_element_to_end)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME}
        main.cpp
        )