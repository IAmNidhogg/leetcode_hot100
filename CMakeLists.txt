cmake_minimum_required(VERSION 3.10)

project(leetcode_hot100 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(leetcode_hot100
  main.cpp
function.cpp
helper.cpp
)

target_include_directories(leetcode_hot100 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
