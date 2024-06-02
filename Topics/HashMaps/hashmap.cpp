#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

    // Map stl -> <key, value>
    unordered_map<string, int> map1;

    // Map insertion 1
    pair<string, int> pair1 = make_pair("Devansh", 1);
    map1.insert(pair1);

    // Map insertion 2
    pair<string, int> pair2("Manav", 2);
    map1.insert(pair2);

    // Map insertion 3
    map1["Darshan"] = 3;
    map1["Yash"] = 4;
    map1["Harsh"] = 5;
    map1["Aayush"] = 6;

    // Search map element
    cout << map1["Yash"] << endl;
    cout << map1["Manav"] << endl;
    cout << map1.at("Devansh") << endl; // this only search the element
    // cout << map1.at("Aman") << endl; // This will give error because no element named aman is found
    cout << map1["Aman"] << endl;       // If no element is present then it will create an entry with value initial to 0(if val is int)

    // Update the key value
    map1["Aman"] = 7;
    cout << map1.at("Aman") << endl;

    // Check for the presence
    cout << map1.count("Devansh") << endl; // Will be 1 if exists, will be 0 if it does not exist
    cout << map1.count("Dhruv") << endl;   // Will be 1 if exists, will be 0 if it does not exist

    // size of the map
    cout << "Size of map: " << map1.size() << endl;

    // delete an element
    map1.erase("Aman");

    // will check if the map is erased or not
    cout << "Size of map after deleting: " << map1.size() << endl;

    return 0;
}