// Selection sort: Find the minimum element and swap it with the current element
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector <int> &v) {
    for(int i = 0; i < v.size(); i++) {
        int minELeIdx = i;
        for(int j = i; j < v.size(); j++) {
            if(v[j] < v[minELeIdx]) {
                minELeIdx = j;
            }
        }
        swap(v[i], v[minELeIdx]);
    }
}
int main() {

    vector <int> v = {4, 1, 5, 2, 3, 6, 4, 2, 8};
     cout << "Unsorted array: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    selectionSort(v);
    cout << "Sorted array: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}