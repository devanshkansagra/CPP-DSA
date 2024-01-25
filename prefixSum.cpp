#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <vector <int>> arr = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}};
    int l1 = 1;
    int l2 = 2;
    int r1 = 1;
    int r2 = 2;

    int sum = 0;
    for(int i = l1; i <= l2; i++) {
        for(int j = r1; j <= r2; j++) {
            sum += arr[i][j];
        }
    }
    cout << sum << endl;
    return 0;
}