cmake_minimum_required(VERSION 4.0)
project(DSA)

set(CMAKE_CXX_STANDARD 20)

add_executable(DSA main.cpp
        pattern_1.cpp
        pattern_2.cpp
        pattern_3.cpp
        pattern_4.cpp
        pattern_5.cpp
        pattern_6.cpp
        pattern_7.cpp
        pattern_8.cpp
        Pattern_9.cpp
        pattern_10.cpp
        pattern_11.cpp
        pattern_12.cpp
        pattern_13.cpp
        pattern_14.cpp
        pattern_15.cpp
        pattern_16.cpp
        PATTERN/pattern_1.cpp
        PATTERN/pattern_16.cpp
        PATTERN/pattern_17.cpp
        PATTERN/altu_faltu.cpp
        PATTERN/pattern_18.cpp
        PATTERN/pattern_19.cpp
        PATTERN/pattern_20.cpp
        PATTERN/pattern_21.cpp
        PATTERN/pattern_22.cpp
)
file(GLOB PATTERN_SOURCES "PATTERN/*.cpp")
add_executable(MyProject ${PATTERN_SOURCES})
