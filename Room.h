#pragma once
#include <string>
#include <vector>
#include "Student.h"
using namespace std;
/*Room class: represents a single room in a dormitory
 manages occupants and enforces capacity limits*/
class Room {
private:
    int roomNumber;
    int capacity;
    vector<Student*> occupants;// a list that stores pointers to students occupying a room

public:
    Room(int roomNumber, int capacity);

    int  getRoomNumber() const;
    int  getCapacity() const;
    int  getOccupancy() const; // current number of students
    bool isFull() const;

    bool addStudent(Student* student);

    bool removeStudent(const string& studentId);

    const vector<Student*>& getOccupants() const;
    void display() const;
};