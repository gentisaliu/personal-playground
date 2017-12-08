# stop if cmake version below 2.6
cmake_minimum_required(VERSION 2.6)

# project name
project(CMakeSampleProject)

# enable c++ language
enable_language(CXX)

# c++ compiler flags for GNU
if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")
endif()

# location of header files
include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_BINARY_DIR})

# build executable
add_executable(program1 src/program1.cc src/test_class_one.cc)
add_executable(program2 src/program2.cc src/test_class_two.cc)
