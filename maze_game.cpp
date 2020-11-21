//
// Created by eric on 2020-11-20.
//
#include "maze_game.hpp"

Maze *maze_game::create_maze(maze_factory &factory) {
    Maze* maze = factory.make_maze();
    Room* room1 = factory.make_room(0);
    Room* room2 = factory.make_room(1);
    Wall* wall1 = factory.make_wall();
    Wall* wall2 = factory.make_wall();
    Wall* wall3 = factory.make_wall();
    Wall* wall4 = factory.make_wall();
    Door* door = factory.make_door(room1, room2);
    maze->add_door(door);
    maze->add_room(room1);
    maze->add_room(room2);
    maze->add_wall(wall1);
    maze->add_wall(wall2);
    maze->add_wall(wall3);
    maze->add_wall(wall4);
    return maze;
}
