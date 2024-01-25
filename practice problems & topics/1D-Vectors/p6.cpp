// Given an integer array and two integers L and R. FInd the sum of elements between index L and index R.
// Note: L and R inclusive

#include <iostream>
#include<vector>
using namespace std;

int main() {

    vector <int> v;
    v = {1, 2, 3, 4, 5};
    int L = 2, R = 2;
    int sum = 0;
    for(int i = L; i <= R; i++) {
        sum += v[i];
    }   
    cout << sum << endl;
    return 0;
}