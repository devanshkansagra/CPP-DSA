// Check if the array is sorted

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector <int> v) {
    
    bool flag = true;
    for(int i = 0; i < v.size()-1; i++) {
        if(v[i] > v[i+1]) {
            return false;
        }
    }

    return true;
}
int main() {

    vector <int> v = {1, 2, 7, 4, 5};
    cout << isSorted(v) << endl;
    return 0;
}