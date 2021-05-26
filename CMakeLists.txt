cmake_minimum_required(VERSION 3.17)
project(mod)

set(CMAKE_CXX_STANDARD 17)

add_executable(mod
        reader/Reader.cpp
        reader/FileReader.cpp
        counter/WordCounter.cpp
        main.cpp)

project(tests)

set(CMAKE_CXX_STANDARD 17)

add_executable(tests
        reader/Reader.cpp
        reader/FileReader.cpp
        counter/WordCounter.cpp
        tests.cpp)