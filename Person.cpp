#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(const string& fullName) : fullName(fullName) {}
string Person::getFullName() const 
{ return fullName; }

void Person::display() const 
{
    cout << "Name: " << fullName << "\n";
}

Person::~Person() {}