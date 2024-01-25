/*
    Given an integer array containing n elements. Find the element in the array for which all the elements
    to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101

    Ex: arr=[1,6,5,7,10,8,9]  
    Output: 7
        Explanation: Here all the elements to the left of 7 are smaller than it and all the elements to the right of it 
        are greater than it.
    Ex: arr=[5,6,2,8,10,9]
    Output: -1
        Explanation: Here there is no element in the array which satisfies the given condition.
*/

#include <iostream>
using namespace std;

int findElement(int arr[], int n) {
    int leftMax[n];
    leftMax[0] = arr[0];
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i-1], arr[i-1]);

    int rightMin = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > leftMax[i] && arr[i] < rightMin)
            return arr[i];
        rightMin = min(rightMin, arr[i]);
    }

    return -1;
}

int main() {
    int arr[] = {5,6,2,8,10,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << findElement(arr, n) << endl;
    return 0;
}