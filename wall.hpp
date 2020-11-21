//
// Created by eric on 2020-11-20.
//
#ifndef ABSTRACTFACTORY_WALL_HPP
#define ABSTRACTFACTORY_WALL_HPP


struct Wall {
    virtual void printWall() = 0;
};

struct FaeryLandWall : Wall {
    void printWall() override {
        std::cout << "This wall has faery wings on it" << std::endl;
    }
};

struct DystopianWall : Wall {
    void printWall() override {
        std::cout << "This wall has surveillance cameras on it" << std::endl;
    }
};
#endif //ABSTRACTFACTORY_WALL_HPP
