#pragma once
#include <string>
using namespace std;
class Person {
protected:
    string fullName;

public:
    Person(const string& fullName);

    virtual string getFullName() const;
    virtual void display() const;
    virtual ~Person();
};