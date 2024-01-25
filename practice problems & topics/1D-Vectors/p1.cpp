// Find the last occurence of the array;

#include <iostream>
#include<vector>
using namespace std;

int main() {

    vector <int> v;
    v = {1, 2, 3, 2, 1};
    int key = 1;
    int occurence;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == key) {
            occurence = i;
        }
    }
    cout << "Last element occured at: " << occurence << endl;

    // Reverse traversing
    occurence = 0;
    for(int i = v.size() - 1; i >= 0; i--) {
        if(v[i] == key) {
            occurence = i;
            break;
        }
    }
    cout << "Last element occured at: " << occurence << endl;
    return 0;
}