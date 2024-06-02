#include<iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int an = mid - left + 1;
    int bn = right - mid;

    int leftArr[an], rightArr[bn];

    for(int i = 0; i < an; i++) {
        leftArr[i] = arr[left + i];
    }

    for(int i = 0; i < bn; i++) {
        rightArr[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while(i < an && j < bn) {
        if(leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } 

        else {
            arr[k++] = rightArr[j++];
        }
    }

    while(i < an) {
        arr[k++] = leftArr[i++];
    }

    while(j > bn) {
        arr[k++] = rightArr[j++];
    }
}
void mergeSort(int arr[], int left, int right) {
    if(left >= right) {
        return;
    }
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
int main() {

    int arr[] = {10, 25, 6, 1, 23, 14};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}