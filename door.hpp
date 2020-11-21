//
// Created by eric on 2020-11-20.
//
#ifndef ABSTRACTFACTORY_DOOR_HPP
#define ABSTRACTFACTORY_DOOR_HPP


struct Door {
    Room* room1;
    Room* room2;
    Door(Room* room1, Room* room2) : room1(room1), room2(room2) {}
    virtual void printDoor() = 0;
};

struct FaeryLandDoor : Door {
    FaeryLandDoor(Room* room1, Room* room2) : Door(room1, room2) {}
    void printDoor() override {
        std::cout << "This door has a faery wing for a handle. "
                     << "This door connects Faery Room " << room1->roomNum
                     << " and Faery Room " << room2->roomNum
                     << std::endl;
    }
};

struct DystopianDoor : Door {
    DystopianDoor(Room* room1, Room* room2) : Door (room1, room2) {}
    void printDoor() override {
        std::cout << "This door has a soma pill for a handle. "
                  << "This door connects Dystopian Room " << room1->roomNum
                  << " and Dystopian Room " << room2->roomNum
                  << std::endl;
    }
};


#endif //ABSTRACTFACTORY_DOOR_HPP
