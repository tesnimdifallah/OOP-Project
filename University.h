#pragma once
#include <string>
#include <vector>
#include "Dormitory.h"
using namespace std;
// manages all dormitories
class University {
private:
    string name;
    vector<Dormitory> dormitories;// list of all dormitories

public:
     University(const string& name);

    string getName() const;

    void addDormitory(const string& dormName, const string& restaurantName);

    Dormitory* findDormitory(const string& dormName);
    void removeDormitory(const string& dormName);

    void displayAll() const;

    const vector<Dormitory>& getDormitories() const;
};