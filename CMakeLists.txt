cmake_minimum_required(VERSION 3.16)
project(Basic-Banking-System-v2.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)
set(CMAKE_CXX_STANDARD 20)
add_executable(banking-system src/main.cpp src/info.cpp src/account.cpp)