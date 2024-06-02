#include<bits/stdc++.h>
using namespace std;

int main() {

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector <int> v(size);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    int minELePos = 0;
    for(int i = 0; i < v.size(); i++) {
        minELePos = i;
        for(int j = i+1; j < v.size(); j++) {
            if(v[j] < v[minELePos]) {
                minELePos = j;
            }
        }
        if(i != minELePos) {
            swap(v[i], v[minELePos]);
        }
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}