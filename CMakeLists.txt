cmake_minimum_required(VERSION 3.19)
project(cpp_learn)

set(CMAKE_CXX_STANDARD 20)

include_directories(example/add)
include_directories(example/foo)
include_directories(example/swap)
include_directories(src/string)

add_executable(${PROJECT_NAME} src/string/string-int.cpp)

