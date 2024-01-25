#include <iostream>
#include<vector>
using namespace std;

int main() {

    vector <int> v1;
    v1 = {1, 2, 3, 4, 5};

    // Basic Operation
    cout << v1.size() << endl;  // Display original size 5
    cout << v1.capacity() << endl; // Display the capacity of the vector
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Pushing element to the end of the array/vector
    v1.push_back(6);
    cout << v1.size() << endl; // Display New Size 6
    cout << v1.capacity() << endl; // Display the capacity of the vector
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Resize operation
    v1.resize(7);
    cout << v1.size() << endl;  // Display New size 7
    cout << v1.capacity() << endl; // Display the capacity of the vector
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Insert operation
    v1.insert(v1.begin() + 6, 7);   // Inserted element on 6th position of array
    cout << v1.size() << endl;  // Updated the size of array
    cout << v1.capacity() << endl; // Display the capacity of the vector
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Delete last element
    v1.pop_back();  // Will Delete the last element of the array
    cout << v1.size() << endl;  // Updated the size of array
    cout << v1.capacity() << endl; // Display the capacity of the vector
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Delete element from any position
    v1.erase(v1.begin() + 4);
    cout << v1.size() << endl;
    cout << v1.capacity() << endl; // Display the capacity of the vector
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Delete entire vector/array
    v1.clear();
    cout << v1.size() << endl;
    cout << v1.capacity() << endl; // Display the capacity of the vector
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    return 0;
}