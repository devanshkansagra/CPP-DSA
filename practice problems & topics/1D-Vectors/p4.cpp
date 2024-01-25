// Check if the array is sorted or not
#include <iostream>
#include<vector>
using namespace std;

int main() {

    vector <int> v;
    v = {1, 2, 6, 4, 5};
    bool isSorted = true;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] <= v[i-1]) {
            isSorted = false;
        }
    }
    if(isSorted) {
        cout << "Array is sorted" << endl;
    }
    else {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}