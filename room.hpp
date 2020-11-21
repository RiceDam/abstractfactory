//
// Created by eric on 2020-11-20.
//
#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP


struct Room {
    int roomNum;
    Room(int roomNum) : roomNum(roomNum) {}
    virtual void printRoom() = 0;
};

struct FaeryLandRoom : Room {
    FaeryLandRoom(int num) : Room(num) {}
    void printRoom() override {
        std::cout << "Faery Room " << roomNum << ": This room has faeries in it" << std::endl;
    }
};

struct DystopianRoom : Room {
    DystopianRoom(int num) : Room(num) {}
    void printRoom() override {
        std::cout << "Dystopian Room " << roomNum << ": This room has communist pigs in it" << std::endl;
    }
};

#endif //ABSTRACTFACTORY_ROOM_HPP
