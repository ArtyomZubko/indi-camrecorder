cmake_minimum_required(VERSION 3.28)
project(indi_camrecorder)

set(CMAKE_CXX_STANDARD 23)

add_executable(indi_camrecorder
        main.cpp
)

add_subdirectory(libs/imgui-cmake)
target_link_libraries(indi_camrecorder PUBLIC imgui)
