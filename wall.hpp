//
// Created by eric on 2020-11-20.
//
#ifndef ABSTRACTFACTORY_WALL_HPP
#define ABSTRACTFACTORY_WALL_HPP

/**
 * Wall struct.
 */
struct Wall {
    // Method to print information of the wall.
    virtual void printWall() = 0;
};

/**
 * Faery Land Wall which inherits from the Wall struct.
 */
struct FaeryLandWall : Wall {
    void printWall() override {
        std::cout << "This wall has faery wings on it" << std::endl;
    }
};

/**
 * Dystopian Wall which inherits from the Wall struct.
 */
struct DystopianWall : Wall {
    void printWall() override {
        std::cout << "This wall has surveillance cameras on it" << std::endl;
    }
};
#endif //ABSTRACTFACTORY_WALL_HPP
