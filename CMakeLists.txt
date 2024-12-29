cmake_minimum_required(VERSION 3.29)

project(dslib)

include_directories(${CMAKE_SOURCE_DIR}/include)


set(CMAKE_CXX_STANDARD 11)

add_executable(dslib main.cpp)
