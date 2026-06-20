#pragma once
#include <string>
#include <map>
 using namespace std;
 // Restaurant class: represents the dining facility
// each dormitory has exactly one restaurant
// manages daily meal menu (breakfast, lunch, dinner)
class Restaurant {
private:
    string name;
    map<string, string> menu;  // meal type -> description

public:
     Restaurant(const string& name);

    string getName() const;
// sets or updates a meal description
    void setMeal(const string& mealType,const string& description);
    void displayMenu() const;
     // returns description of a specific meal
    string getMeal(const string& mealType) const;
};