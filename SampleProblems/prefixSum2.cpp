#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <vector <int>> arr = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};
    int l1 = 1;
    int l2 = 2;
    int r1 = 1;
    int r2 = 2;

    for(int i = 1; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            arr[i][j] += arr[i-1][j];
        }

    }

    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}