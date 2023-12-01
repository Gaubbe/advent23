cmake_minimum_required(VERSION 3.27)
project(advent23)

file(GLOB_RECURSE ${PROJECT_NAME}_SOURCES src/*.cpp)

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES})
