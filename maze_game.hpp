//
// Created by eric on 2020-11-20.
//
#ifndef ABSTRACTFACTORY_MAZE_GAME_HPP
#define ABSTRACTFACTORY_MAZE_GAME_HPP


#include "maze.hpp"
#include "maze_factory.hpp"

class maze_game {
public:
    Maze* create_maze(maze_factory& factory);
};


#endif //ABSTRACTFACTORY_MAZE_GAME_HPP
