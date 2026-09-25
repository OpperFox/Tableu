cmake_minimum_required(VERSION 3.20)

project(mi_proyecto)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Tableu
    src/main.cpp
)

target_include_directories(Tableu PRIVATE
    ${CMAKE_SOURCE_DIR}/Third-party/eigen-5.0.0
)
