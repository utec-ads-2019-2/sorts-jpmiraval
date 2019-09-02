cmake_minimum_required(VERSION 3.13)
project(sorts_jpmiraval)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(sorts_jpmiraval
        bubble.h
        counting.h
        insert.h
        LICENSE
        main.cpp
        merge.h
        mocker.cpp
        mocker.h
        quick.h
        radix.h
        select.h
        shell.h
        sort.h
        tester.cpp
        tester.h)
