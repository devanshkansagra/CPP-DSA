// Find the second smallest and second largest element in the array without sorting

#include <bits/stdc++.h>
using namespace std;

int maxEleIndex(vector <int> v) {
    int maxEleIdx = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] > v[maxEleIdx]) {
            maxEleIdx = i;
        }
    }

    return maxEleIdx;
}
int secondLargest(vector <int> v) {
    int mIdx = maxEleIndex(v);
    for(int i = 0; i < v.size(); i++) {
        if(i != mIdx && v[i] == v[mIdx]) {
            v[i] = 0;
        }
    }
    v[mIdx] = 0;
    return v[maxEleIndex(v)];
}

int minEleIndex(vector <int> v) {
    int minEleIdx = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] < v[minEleIdx]) {
            minEleIdx = i;
        }
    }

    return minEleIdx;
}
int secondSmallest(vector <int> v) {
    int mIdx = minEleIndex(v);
    for(int i = 0; i < v.size(); i++) {
        if(i != mIdx && v[i] == v[mIdx]) {
            v[i] = INT_MAX;
        }
    }
    v[mIdx] = INT_MAX;
    return v[minEleIndex(v)];
}

int main() {

    vector <int> v = {1,2,4,7,7,5,7};
    int sl = secondLargest(v);
    cout << "Second largest element in the array is: " << sl << endl;

    int s2 = secondSmallest(v);
    cout << "Second smallest element in the array is: " << s2 << endl;
    return 0;
}