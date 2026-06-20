#include "University.h"
#include <iostream>
using namespace std;

University::University(const string& name) : name(name) {}

string University::getName() const { return name; }

void University::addDormitory(const string& dormName,  const string& restaurantName) {
    
    if (findDormitory(dormName)) {
        cout << "Dormitory '" << dormName << "' already exists.\n";
        return;
    }
    dormitories.emplace_back(dormName, restaurantName);
    cout << "Dormitory '" << dormName << "' added.\n";
}

Dormitory* University::findDormitory(const string& dormName) {
    for (auto& d : dormitories)
        if (d.getName() == dormName) return &d;
    return nullptr;
}

void University::removeDormitory(const string& dormName)
{
    for (auto it = dormitories.begin(); it != dormitories.end(); ++it)
    {
        if (it->getName() == dormName)
        {
            dormitories.erase(it);
            cout << "Dormitory '" << dormName << "' removed.\n";
            return;
        }
    }

    cout << "Dormitory not found.\n";
}

void University::displayAll() const {
    cout << "=== University: " << name << " ===\n";
    if (dormitories.empty()) {
        cout << "  No dormitories registered.\n";
        return;
    }
    for (const auto& d : dormitories)
        d.displayStatus();
}

const vector<Dormitory>& University::getDormitories() const {
    return dormitories;
}