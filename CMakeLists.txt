cmake_minimum_required(VERSION 3.10)

project(DubiousDragons)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(DubiousDragons src/main.cpp, src/power.cpp, src/battle.cpp)