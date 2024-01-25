// Find the total number of pairs whose sum is equal to the value of x
#include <iostream>
using namespace std;

int main() {

    int arr[] = {3, 1, 3, 4, 2, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 6;
    int count = 0;

    for(int i = 0; i < size; i++) {
        for(int k = i+1; k < size; k++) {
            if(arr[i] + arr[k] == x) {
                count += 1;
            }
        }
    }
    cout << count << endl;
    return 0;
}