cmake_minimum_required(VERSION 3.1)
project(untitled)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libstdc++ ")
set(SOURCE_FILES main.cpp
                 ../source_dir/source_file.cpp)

add_executable(untitled5 ${SOURCE_FILES})

