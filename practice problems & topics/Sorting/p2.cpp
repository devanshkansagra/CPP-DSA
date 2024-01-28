#include<bits/stdc++.h>
using namespace std;

int main() {

    vector <string> v = {"papaya", "lime", "watermelon","apple", "mango", "kiwi"};
    int minElePos = 0;
    for(int i = 0; i < v.size(); i++) {
        minElePos = i;
        for(int j = i + 1; j < v.size(); j++) {
            if(v[j] < v[minElePos]) {
                minElePos = j;
            }
        }
        if(i != minElePos) {
            swap(v[i], v[minElePos]);
        }
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}