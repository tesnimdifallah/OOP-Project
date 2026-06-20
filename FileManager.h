
#include "University.h"
#include <string>
using namespace std;
// FileManager class: handles data persistence
// saves and loads university data to/from text files
// uses static methods — no instance needed
class FileManager {
public:
// saves all university data to a file
    // format: DORM/MENU/ROOM/STUDENT lines
    static void save(const University& uni,
                     const string& filepath);
 // loads university data from a file
    // creates dormitories, rooms and students from saved data
    static void load(University& uni,
                     const string& filepath);
};