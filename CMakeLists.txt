cmake_minimum_required(VERSION 3.5.1)
project(recDrawing)

# not CXX_STANDARD 14
# but CMAKE_CXX_STANDARD 14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable( recDrawing
    src/main.cpp
    src/Screen.cpp
    src/Rec.cpp
)