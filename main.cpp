#include <iostream>
#include "maze_game.hpp"

int main() {
    Maze_Game game;
    Maze_Factory* faery = new FaeryLandMaze_Factory();
    Maze_Factory* dyst = new DystopianMaze_Factory();
    Maze* faeryMaze = game.create_maze(*faery);
    faeryMaze->printMaze();
    Maze* dystopianMaze = game.create_maze(*dyst);
    dystopianMaze->printMaze();
    return 0;
}
