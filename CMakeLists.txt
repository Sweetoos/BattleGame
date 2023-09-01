cmake_minimum_required(VERSION 3.18)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(run VERSION 1.0)

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(run ${SRC_FILES})
target_include_directories(run PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)