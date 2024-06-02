#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 4;

    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            cout << key  << " is positioned at index " << i << endl;
            break;
        }
    }
    return 0;
}