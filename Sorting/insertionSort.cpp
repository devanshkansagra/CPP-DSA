// Insertion sort: Take an element and place it at it's correct position
#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector <int> &v) {
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j <= i; j++) {
            if(v[i] < v[j]) {
                swap(v[i], v[j]);
            }
        }
        for(int j = 0; j < v.size(); j++) {
            cout << v[j] << " ";
        }
        cout << endl;
    }
}
int main() {

    vector <int> v = {4, 1, 5, 2, 3, 6, 4, 2, 8};
    cout << "Unsorted array: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    insertionSort(v);

    cout << "Sorted array: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}