cmake_minimum_required(VERSION 3.14)
project(carlier)

set(CMAKE_CXX_STANDARD 17)

add_executable(carlier main.cpp cmake-build-debug/Carlier.cpp cmake-build-debug/Carlier.h cmake-build-debug/Jobs.cpp cmake-build-debug/Jobs.h)