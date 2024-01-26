#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int leftArr[n1], rightArr[n2];

    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    while (i < n1) {
        arr[k++] = leftArr[i++];
    }
    while (j < n2) {
        arr[k++] = rightArr[j++];
    }
}

void mergeSort(int arr[], int l, int r) {
    if(l >= r) {
		return;
	}

	int mid = (l + r) / 2;
	mergeSort(arr, l, mid);
	mergeSort(arr, mid+1, r);
	merge(arr, l, mid, r);
}

int main() {
    int arr[] = {4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n-1);
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
