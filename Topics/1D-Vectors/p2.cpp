// Count the number of occurences of a particular element x
#include <iostream>
#include<vector>
using namespace std;

int main() {

    vector <int> v;
    v = {1, 2, 3, 2, 1, 2};
    int key = 2;
    int count = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == key) {
            count += 1;
        }
    }
    cout << "The element occured " << count << " times" << endl;
    return 0;
}