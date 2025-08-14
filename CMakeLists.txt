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
        PATTERN/pattern_18.cpp
        PATTERN/pattern_19.cpp
        PATTERN/pattern_20.cpp
        PATTERN/pattern_21.cpp
        PATTERN/pattern_22.cpp
        PATTERN/pattern_23.cpp
        PATTERN/pattern_24.cpp
        PATTERN/pattern_25.cpp
        PATTERN/pattern_26.cpp
        PATTERN/pattern_27.cpp
        PATTERN/pattern_28.cpp
        PATTERN/pattern_29.cpp
        PATTERN/pattern_30.cpp
        PATTERN/pattern_31.cpp
        PATTERN/pattern_32.cpp
        .idea/ALL_ABOUT_STL/vector_properties.cpp
        .idea/ALL_ABOUT_STL/CLASS_ASSIGNMENT_1/ques_1.cpp
        .idea/ALL_ABOUT_STL/CLASS_ASSIGNMENT_1/ques_2.cpp
        .idea/ALL_ABOUT_STL/CLASS_ASSIGNMENT_1/ques_7.cpp
        .idea/ALL_ABOUT_STL/CLASS_ASSIGNMENT_1/ques_8.cpp
        .idea/ALL_ABOUT_STL/CLASS_ASSIGNMENT_1/ques_4_1part.cpp
        .idea/ALL_ABOUT_STL/CLASS_ASSIGNMENT_1/ques_4_2part.cpp
        .idea/ALL_ABOUT_STL/CLASS_ASSIGNMENT_1/ques_4_3part.cpp
        .idea/ALL_ABOUT_STL/CLASS_ASSIGNMENT_1/ques_4_4part.cpp
        .idea/ALL_ABOUT_STL/CLASS_ASSIGNMENT_1/ques_4_5part.cpp
        .idea/ALL_ABOUT_STL/CLASS_ASSIGNMENT_1/bubble_sorter.cpp
        .idea/ALL_ABOUT_STL/CLASS_ASSIGNMENT_1/binsry_search.cpp
        .idea/ALL_ABOUT_ARRAYSS/Diagonal_Matrix.cpp
        .idea/ALL_ABOUT_ARRAYSS/Tri_daigonal_Matrix.cpp
        .idea/ALL_ABOUT_STL/List_Properties.cpp
        .idea/ALL_ABOUT_STL/Deque_properties.cpp
        .idea/ALL_ABOUT_STL/Pair_properties.cpp
        .idea/ALL_ABOUT_STL/stack_properties.cpp
        .idea/ALL_ABOUT_STL/queue_properties.cpp
        .idea/ALL_ABOUT_STL/priorityqueue_properties.cpp
        .idea/ALL_ABOUT_STL/map_propperties.cpp
        .idea/ALL_ABOUT_STL/set_propterties.cpp
        .idea/ALL_ABOUT_STL/Algorthims_sorting.cpp
)
file(GLOB PATTERN_SOURCES "PATTERN/*.cpp")
add_executable(MyProject ${PATTERN_SOURCES})
