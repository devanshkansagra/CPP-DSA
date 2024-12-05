#include <bits/stdc++.h>
using namespace std;

// Function to perform Bucket Sort
void bucketSort(vector<float>& arr) {
    int n = arr.size();
    if (n <= 0) return;

    // Create n empty buckets
    vector<vector<float>> buckets(n);

    // Place array elements into corresponding buckets
    for (int i = 0; i < n; i++) {
        int bucketIndex = n * arr[i]; // Index in range [0, n-1]
        buckets[bucketIndex].push_back(arr[i]);
    }

    // Sort individual buckets
    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Concatenate all buckets into the original array
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (float value : buckets[i]) {
            arr[index++] = value;
        }
    }
}

// Function to print an array
void print(const vector<float>& arr) {
    for (float num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<float> arr = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47, 0.37};
    cout << "Original array: ";
    print(arr);

    bucketSort(arr);

    cout << "Sorted array: ";
    print(arr);

    return 0;
}
