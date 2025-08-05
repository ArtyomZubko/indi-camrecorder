cmake_minimum_required(VERSION 3.28)
project(indi_camrecorder)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_POLICY_DEFAULT_CMP0177 NEW)

add_executable(indi_camrecorder
        main.cpp
)

add_subdirectory(libs/imgui-cmake)
add_subdirectory(libs/indi)

target_link_libraries(indi_camrecorder PUBLIC imgui indiclient)
