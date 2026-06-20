#include "FileManager.h"
#include <fstream>//reading files -> ifstream  writing files ->ofstream
#include <iostream>
#include <sstream>
using namespace std;
// saves all university data to text file
// each line starts with a tag: DORM, MENU, ROOM, or STUDENT
void FileManager::save(const University& uni,const string& filepath) {
    ofstream file(filepath);//opens file for writing   overwrites existing file
    if (!file.is_open()) {
        cout << "Error: cannot open file for saving.\n";
        return;
    }

    for (const auto& dorm : uni.getDormitories()) {

        file << "DORM:" << dorm.getName()
             << ":" << dorm.getRestaurant().getName() << "\n";

        file << "MENU:breakfast:"
             << dorm.getRestaurant().getMeal("breakfast") << "\n";
        file << "MENU:lunch:"
             << dorm.getRestaurant().getMeal("lunch") << "\n";
        file << "MENU:dinner:"
             << dorm.getRestaurant().getMeal("dinner") << "\n";

        for (const auto& room : dorm.getRooms()) {
            file << "ROOM:" << room.getRoomNumber()
                 << ":" << room.getCapacity() << "\n";

            for (const auto* s : room.getOccupants()) {
                file << "STUDENT:" << s->getId()
                     << ":" << s->getFullName()
                     << ":" << s->getYear() << "\n";
            }
        }
    }

    file.close();
    cout << "Data saved successfully.\n";
}
// loads university data from text file
// reads line by line and reconstructs all objects
void FileManager::load(University& uni,
                        const string& filepath) {
    ifstream file(filepath);
    if (!file.is_open()) {
        cout << "No save file found, starting fresh.\n";
        return;
    }

    string line;
    Dormitory* currentDorm = nullptr;
    int        currentRoomNum = -1;

    while (getline(file, line)) {
        stringstream ss(line);
        string tag;
        getline(ss, tag, ':');

        if (tag == "DORM") {
            string dName, rName;
            getline(ss, dName, ':');
            getline(ss, rName, ':');
            uni.addDormitory(dName, rName);
            currentDorm = uni.findDormitory(dName);

        } else if (tag == "MENU" && currentDorm) {
            string mealType, desc;
            getline(ss, mealType, ':');
            getline(ss, desc);
            currentDorm->getRestaurant().setMeal(mealType, desc);

        } else if (tag == "ROOM" && currentDorm) {
            string num, cap;
            getline(ss, num, ':');
            getline(ss, cap);
            currentDorm->addRoom(stoi(num), stoi(cap));
            currentRoomNum = stoi(num);

        } else if (tag == "STUDENT" && currentDorm) {
            string id, name, year;
            getline(ss, id,   ':');
            getline(ss, name, ':');
            getline(ss, year);


            Student* s = new Student(id, name, stoi(year));
            Room* r = currentDorm->findRoom(currentRoomNum);
            if (r) r->addStudent(s);
        }
    }

    file.close();
    cout << "Data loaded successfully.\n";
}