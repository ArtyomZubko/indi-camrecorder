cmake_minimum_required(VERSION 3.28)

set(MACOS_FRAMEWORKS
        "-framework Cocoa"
        "-framework IOKit"
        "-framework CoreVideo"
        "-framework OpenGL"
)
find_package(glfw3 3.4 REQUIRED)
add_library(imgui STATIC)

target_sources(imgui PRIVATE
        ../imgui/imgui.cpp
        ../imgui/imgui_widgets.cpp
        ../imgui/imgui_tables.cpp
        ../imgui/imgui_draw.cpp
        ../imgui/imgui_demo.cpp
        ../imgui/backends/imgui_impl_opengl3.cpp
        ../imgui/backends/imgui_impl_glfw.cpp
        ../imgui/misc/cpp/imgui_stdlib.cpp
)

target_include_directories(imgui PUBLIC
        ../imgui
        ../imgui/backends
        ../imgui/misc/cpp
)

target_link_libraries(imgui PUBLIC
        ${MACOS_FRAMEWORKS}
        glfw
)