// Find the unique number in the given array where all elements are being repeated twice with one value unique
#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 3, 1, 3, 5, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    int temp;
    for(int i = 0; i < size; i++) {
        for(int k = i + 1; k < size; k++) {
            if(arr[i] == arr[k]) {
                arr[i] = arr[k] = -1;
            }
        }
    }
    for(int i = 0; i < size; i++) {
       if(arr[i] > 0) {
            cout << arr[i];
       }
    }
    cout << endl;
    return 0;
}