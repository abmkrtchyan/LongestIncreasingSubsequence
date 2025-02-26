cmake_minimum_required(VERSION 3.0)
project(LongestIncreasingSubsequence)

include_directories(include)

set(SOURCE_FILES
        src/main.cpp
)
add_executable(LongestIncreasingSubsequence ${SOURCE_FILES})
