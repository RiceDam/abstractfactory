//
// Created by eric on 2020-11-20.
//
#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP


#include "maze.hpp"
#include "wall.hpp"
#include "room.hpp"
#include "door.hpp"

/**
 * Abstract factory used for creating mazes, doors, walls and rooms.
 */
struct Maze_Factory {
    // Method to create a new maze that gets overrided
    virtual Maze* make_maze() = 0;
    // Method to create a new wall that gets overrided
    virtual Wall* make_wall() = 0;
    // Method to create a new room that gets overrided
    virtual Room* make_room(int num) = 0;
    // Method to create a new door that gets overrided
    virtual Door* make_door(Room* room1, Room* room2) = 0;
};

/**
 * Faery Land Maze Factory that inherits from Maze Factory.
 */
struct FaeryLandMaze_Factory : Maze_Factory {
    Maze* make_maze() override{
        return new FaeryLandMaze;
    }

    Wall* make_wall() override {
        return new FaeryLandWall;
    }

    Room* make_room(int num) override {
        return new FaeryLandRoom(num);
    }

    Door *make_door(Room *room1, Room *room2) override {
        return new FaeryLandDoor(room1, room2);
    }
};

/**
 * Dystopian Maze Factory that inherits from Maze_Factory.
 */
struct DystopianMaze_Factory: Maze_Factory {
    Maze *make_maze() override {
        return new DystopianMaze;
    }

    Wall *make_wall() override {
        return new DystopianWall;
    }

    Room *make_room(int num) override {
        return new DystopianRoom(num);
    }

    Door *make_door(Room *room1, Room *room2) override {
        return new DystopianDoor(room1, room2);
    }
};

#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
