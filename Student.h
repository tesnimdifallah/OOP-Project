#pragma once
#include "Person.h"
#include <string>
using namespace std;
class Student : public Person {
private:
    string id;
    int academicYear;//(1-5)

public:
    Student(const string& id,
            const string& fullName,
            int academicYear);

    string getId()   const;
    int         getYear() const;

    void setYear(int year);

    void display() const override;
};