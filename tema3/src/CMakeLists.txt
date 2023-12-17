cmake_minimum_required(VERSION 3.10)
project(ProjectLab)
set(myproject "ProjectLab")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ProjectLab main.cpp libs/Counter.h libs/MusicP.h libs/ComplexNumber.h)
target_include_directories(ProjectLab PUBLIC "${PROJECT_BINARY_DIR}")
target_include_directories(ProjectLab PRIVATE "${CMAKE_SOURCE_DIR}/libs")
include_directories(SYSTEM)

