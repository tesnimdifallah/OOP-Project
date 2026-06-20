#include "Dormitory.h"
#include <iostream>
using namespace std;
Dormitory::Dormitory(const string& name,const string& restaurantName)
    : name(name), restaurant(restaurantName) {}

string Dormitory::getName() const { return name; }

void Dormitory::addRoom(int roomNumber, int capacity) {
    rooms.emplace_back(roomNumber, capacity);
}

Room* Dormitory::findRoom(int roomNumber) {
    for (auto& r : rooms)
        if (r.getRoomNumber() == roomNumber) return &r;
    return nullptr;
}

bool Dormitory::assignStudent(Student* student, int roomNumber) {
    Room* r = findRoom(roomNumber);
    if (!r) {
        cout << "Room " << roomNumber << " not found.\n";
        return false;
    }
    return r->addStudent(student);
}

bool Dormitory::removeStudent(const string& studentId, int roomNumber) {
    Room* r = findRoom(roomNumber);
    if (!r) return false;
    return r->removeStudent(studentId);
}

Restaurant& Dormitory::getRestaurant()
 { return restaurant; }
const Restaurant& Dormitory::getRestaurant() const 
{ return restaurant; }

void Dormitory::displayRooms() const {
    cout << "Dormitory: " << name << "\n";
    for (auto& r : rooms) r.display();
}

void Dormitory::displayStatus() const {
    displayRooms();
    restaurant.displayMenu();
}
const vector<Room>& Dormitory::getRooms() const { return rooms; }