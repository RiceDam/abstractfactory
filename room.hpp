//
// Created by eric on 2020-11-20.
//
#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP

/**
 * Room Struct.
 */
struct Room {
    // The room number
    int roomNum;
    // Constructor to initialize the room number.
    Room(int roomNum) : roomNum(roomNum) {}
    // Method to print the room information that gets overridden.
    virtual void printRoom() = 0;
};

/**
 * Faery Land Room which inherits from the Room Struct.
 */
struct FaeryLandRoom : Room {
    FaeryLandRoom(int num) : Room(num) {}
    void printRoom() override {
        std::cout << "Faery Room " << roomNum << ": This room has faeries in it" << std::endl;
    }
};

/**
 * Dystopian Room which inherits from the Room Struct.
 */
struct DystopianRoom : Room {
    DystopianRoom(int num) : Room(num) {}
    void printRoom() override {
        std::cout << "Dystopian Room " << roomNum << ": This room has communist pigs in it" << std::endl;
    }
};

#endif //ABSTRACTFACTORY_ROOM_HPP
