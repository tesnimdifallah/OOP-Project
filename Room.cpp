#include "Room.h"
#include <iostream>
using namespace std;
Room::Room(int roomNumber, int capacity)
    : roomNumber(roomNumber), capacity(capacity) {}

int  Room::getRoomNumber() const { return roomNumber; }
int  Room::getCapacity()   const { return capacity; }
int  Room::getOccupancy()  const { return occupants.size(); }
bool Room::isFull()        const {return occupants.size() >= capacity;}

bool Room::addStudent(Student* student) {
    if (isFull()) {
        cout << "Room " << roomNumber << " is full.\n";
        return false;
    }
    occupants.push_back(student);
    return true;
}

bool Room::removeStudent(const string& studentId)
{
    for (auto it = occupants.begin(); it != occupants.end(); ++it)
    {
        if ((*it)->getId() == studentId)// it is a pointer to student* so *it is student* object
        {
            occupants.erase(it);
            return true;
        }
    }
    return false;
}

const vector<Student*>& Room::getOccupants() const {
   return occupants;
}

void Room::display() const {
    cout << "  Room " << roomNumber
              << " [" << occupants.size() << "/" << capacity << "]\n";











              
    for (auto* s : occupants) s->display();
}