//
// Created by eric on 2020-11-20.
//
#ifndef ABSTRACTFACTORY_MAZE_GAME_HPP
#define ABSTRACTFACTORY_MAZE_GAME_HPP


#include "maze.hpp"
#include "maze_factory.hpp"

/**
 * Class used to initialize the creating of a new maze.
 */
class Maze_Game {
public:
    Maze* create_maze(Maze_Factory& factory);
};


#endif //ABSTRACTFACTORY_MAZE_GAME_HPP
