#include "Restaurant.h"
#include <iostream>
using namespace std;
Restaurant::Restaurant(const string& name) : name(name) {
    menu["breakfast"] = "Not set";
    menu["lunch"] = "Not set";
    menu["dinner"]  = "Not set ";
}

string Restaurant::getName() const { return name; }

void Restaurant::setMeal(const string& mealType,
                          const string& description) {
    if (menu.count(mealType)) //= 1	key exists        =0	key does NOT exist
        menu[mealType] = description;
    else
        cout << "Invalid meal type: " << mealType << "\n";
}

void Restaurant::displayMenu() const {
    cout << "=== Menu: " << name << " ===\n";
    for (const auto& item : menu)
        cout << "  " << item.first << ": " << item.second << "\n";

}
string Restaurant::getMeal(const string& mealType) const
{
    auto it = menu.find(mealType);

    if (it == menu.end())
        return "Not set";

    return it->second;
}