cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(ffmpeg_decode_demo)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(dep/ffmpeg/include)

set(ffmpeg_libs_dir dep/ffmpeg/libs)
link_directories(${ffmpeg_libs_dir})
file(GLOB ffmpeg_libs ${ffmpeg_libs_dir}/*.so)

add_executable(ffmpeg_decode_demo
        main.cpp
        demo/another_file.cpp
        )
