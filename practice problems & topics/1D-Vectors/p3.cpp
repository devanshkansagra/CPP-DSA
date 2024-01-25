// 
#include <iostream>
#include<vector>
using namespace std;

int main() {

    vector <int> v;
    v = {1, 2, 3, 4, 5};
    int key = 1;
    int count = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] > key) {
            count += 1;
        }
    }

    cout << count << endl;
    return 0;
}