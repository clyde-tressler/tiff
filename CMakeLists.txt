cmake_minimum_required(VERSION 3.23)
project(tiff C)
set(CMAKE_C_STANDARD 99)
find_library(tiffio tiffio.h HINTS /usr/local/libtiff/include/tiffio.h PATHS /usr/local/libtiff/include )
add_executable(tiff main.c)

