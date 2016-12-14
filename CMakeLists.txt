cmake_minimum_required(VERSION 3.6)
project(hello)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Hello.c Program2.c Program3.c MyFunctions.h Program4.c MyFunctions.c)
add_executable(hello ${SOURCE_FILES})