cmake_minimum_required(VERSION 2.8.12)

project(spiral)

add_definitions(-std=c++11)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

include_directories(src)

set(SOURCE_FILES
    src/spiral.cpp
)

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})


