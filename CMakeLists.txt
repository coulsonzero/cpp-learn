cmake_minimum_required(VERSION 3.19)
project(cpp_learn)

set(CMAKE_CXX_STANDARD 20)


add_executable(${PROJECT_NAME} src/3-core/map/lib_map-example.cpp)


add_executable(src_3-core_string_lib_string_example src/3-core/string/lib_string_example.cpp)
add_executable(src_3-core_vector_lib_vector-example src/3-core/vector/lib_vector-example.cpp)
add_executable(src_1-basic_02-varibles src/1-basic/02-varibles.cpp)
add_executable(src_1-basic_01-helloworld src/1-basic/01-helloworld.cpp)
add_executable(main main.cpp)