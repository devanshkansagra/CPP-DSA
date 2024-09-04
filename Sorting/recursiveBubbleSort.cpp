// Recursive implementation of bubble sort

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector <int> &v, int n) {
    if (n == 1) return;

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] > v[i+1]) {
            swap(v[i], v[i+1]);
            count += 1;
        }
    }
    if (count == 0) return;

    bubbleSort(v, n-1);
}
int main() {

    vector <int> v = {4, 1, 5, 2, 3};
    int n = v.size();
    bubbleSort(v, n-1);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}