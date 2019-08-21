cmake_minimum_required(VERSION 3.14)
project(algo)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(algo main.cpp lib/cut_rod.cpp include/main.h lib/cut_rod_aux.cpp lib/bottom_cut_rod.cpp include/regex.h)