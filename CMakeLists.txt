cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

include_directories("include")

project(game)
set(game_files src/main.cpp src/view.cpp)
add_executable(game ${game_files})