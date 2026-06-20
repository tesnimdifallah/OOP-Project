#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Room.h"
#include "Restaurant.h"
using namespace std;

// Dormitory class: represents a university dormitory building
// manages rooms and students
// uses composition: each dormitory owns exactly one restaurant
class Dormitory {
private:
    string name;
    vector<Room>  rooms;// list of rooms in this dormitory
    Restaurant  restaurant;

public:
    Dormitory(const string& name,const string& restaurantName);

    string getName() const;
    void addRoom(int roomNumber, int capacity);
    Room* findRoom(int roomNumber);
    bool assignStudent(Student* student, int roomNumber);
    bool removeStudent(const string& studentId, int roomNumber);
    Restaurant& getRestaurant();
    const Restaurant& getRestaurant() const;

    void displayRooms()  const;
    void displayStatus() const;

    // returns list of all rooms
    const vector<Room>& getRooms() const;
};