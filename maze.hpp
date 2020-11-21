//
// Created by eric on 2020-11-20.
//
#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP


#include <iostream>
#include <vector>
#include "room.hpp"
#include "door.hpp"
#include "wall.hpp"

/**
 * Maze struct that holds rooms, doors and walls.
 */
struct Maze {
    std::vector<Room *> rooms;
    std::vector<Door *> doors;
    std::vector<Wall *> walls;
    // Method to print information from the maze.
    virtual void printMaze() = 0;
    // Method to add a room to the maze.
    virtual void add_room(Room *r) = 0;
    // Method to add a door to the maze.
    virtual void add_door(Door *d) = 0;
    // Method to add a wall to the maze.
    virtual void add_wall(Wall *w) = 0;

    // Removes all pointers when maze is deconstructed.
    ~Maze() {
        for (Room *r: rooms) {
            delete r;
        }
        for (Door *d: doors) {
            delete d;
        }
        for (Wall *w: walls) {
            delete w;
        }
    }
};

/**
 * Faery Land Maze that inherits from the Maze struct.
 */
struct FaeryLandMaze : Maze {
    void printMaze() override {
        std::cout << "A pretty, magical faery maze" << std::endl;
        for (Room *r: rooms) {
            r->printRoom();
        }
        for (Door *d: doors) {
            d->printDoor();
        }
        for (Wall *w: walls) {
            w->printWall();
        }
    }

    void add_room(Room *r) override {
        rooms.push_back(r);
    }

    void add_door(Door *d) override {
        doors.push_back(d);
    }

    void add_wall(Wall *w) override {
        walls.push_back(w);
    }
};

/**
 * Dystopian Maze that inherits from the Maze struct.
 */
struct DystopianMaze : Maze {
    void printMaze() override {
        std::cout << "An Orwellian dystopian maze" << std::endl;
        for (Room *r: rooms) {
            r->printRoom();
        }
        for (Door *d: doors) {
            d->printDoor();
        }
        for (Wall *w: walls) {
            w->printWall();
        }
    }

    void add_room(Room *r) override {
        rooms.push_back(r);
    }

    void add_door(Door *d) override {
        doors.push_back(d);
    }

    void add_wall(Wall *w) override {
        walls.push_back(w);
    }
};
#endif //ABSTRACTFACTORY_MAZE_HPP
