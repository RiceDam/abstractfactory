//
// Created by eric on 2020-11-20.
//
#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP


#include "maze.hpp"
#include "wall.hpp"
#include "room.hpp"
#include "door.hpp"

struct maze_factory {
    virtual Maze* make_maze() = 0;
    virtual Wall* make_wall() = 0;
    virtual Room* make_room(int num) = 0;
    virtual Door* make_door(Room* room1, Room* room2) = 0;
};

struct FaeryLandMaze_Factory : maze_factory {
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

struct DystopianMaze_Factory: maze_factory {
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
