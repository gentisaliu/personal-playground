# stop if cmake version below 2.6
cmake_minimum_required(VERSION 2.6)

# project name
project(CMakeSampleProject)

option(SAMPLE_BUILD_SRC "Set to ON to build src/" ON)

# enable c++ language
enable_language(CXX)

set(SOURCE_FOLDER src)

# c++ compiler flags
if(MSVC)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W2")
elseif(CMAKE_CXX_COMPILER_ID MATCHES GNU)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")
endif()

# location of library includes
include_directories(src include)

# find the armadillo library
find_library(ARMADILLO_LIBRARY armadillo HINTS lib)

# build executable
add_executable(program1 src/program1.cc src/test_class_one.cc)
add_executable(program2 src/program2.cc src/test_class_two.cc)

# link libraries
target_link_libraries(program1 ${ARMADILLO_LIBRARY})