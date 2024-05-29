cmake_minimum_required(VERSION 3.4)
project(example)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(header STATIC program_main.cpp)
set_target_properties(header PROPERTIES LINKER_LANGUAGE CXX)

add_executable(game game.cpp)
