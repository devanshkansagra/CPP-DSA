#include <bits/stdc++.h>
using namespace std;

void countSort(vector <int> &arr) {

    // Find maximum element
    int k = arr[0];
    for(int i = 0; i < arr.size(); i++) {
        k = max(k, arr[i]);
    }

    // Create count array;
    vector <int> count(10);
    for(int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
    }

    // Modify Count array
    for(int i = 1; i <= k; i++) {
        count[i] += count[i-1];
    }

    // Create another array
    vector <int> output(arr.size());
    for(int i = arr.size() - 1; i >= 0; i--) {
        output[--count[arr[i]]] = arr[i];
    }

    // Print that array;
    for(int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    cout << endl;
}
int main() {

    vector <int> arr = {3, 1, 3, 4, 2};
    countSort(arr);
    return 0;
}