// Find the second largest element of the array
#include <iostream>
#include <climits>
using namespace std;

int findLargestIndex(int arr[], int size) {
    int maxIndex = 0;
    int max = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}
int main() {

    int arr[] = {2, 3, 5, 7, 6, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxLargeIndex = findLargestIndex(arr, size);
    int largest = arr[maxLargeIndex];

    for(int i = 0; i < size; i++) {
        if(arr[i] == largest) {
            arr[i] = -1;
        }
    }   

    int maxSecondLargeIndex = findLargestIndex(arr, size);
    cout << arr[maxSecondLargeIndex] << endl;
    return 0;
}