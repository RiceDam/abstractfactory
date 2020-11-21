cmake_minimum_required(VERSION 3.17)
project(abstractfactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractfactory main.cpp maze_factory.hpp maze.hpp wall.hpp room.hpp door.hpp maze_game.cpp maze_game.hpp)