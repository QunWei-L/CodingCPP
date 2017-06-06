cmake_minimum_required(VERSION 3.7)
project(CodingCPP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp DP/LQ53.cpp DP/LQ303.cpp other/HowQuickSort.cpp other/HowVector.cpp other/H2PriorityQueque.cpp)
add_executable(CodingCPP ${SOURCE_FILES})