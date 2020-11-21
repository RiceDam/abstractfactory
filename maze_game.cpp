//
// Created by eric on 2020-11-20.
//
#include "maze_game.hpp"

/**
 * Method used to create a new maze using the maze factory.
 * @param factory the factory used to create the maze
 * @return pointer to the newly created maze
 */
Maze *Maze_Game::create_maze(Maze_Factory &factory) {
    Maze* maze = factory.make_maze();
    Room* room1 = factory.make_room(0);
    Room* room2 = factory.make_room(1);
    maze->add_room(room1);
    maze->add_room(room2);
    for (Room *r : maze->rooms) {
        for (int i = 0; i < 4; i++) {
            Wall *w = factory.make_wall();
            maze->add_wall(w);
        }
    }
    Door* door = factory.make_door(room1, room2);
    maze->add_door(door);
    return maze;
}
