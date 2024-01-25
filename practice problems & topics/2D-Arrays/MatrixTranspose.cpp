#include <iostream>
using namespace std;

int main() {

    int mat1[2][3] = {{1, 2, 3}, {3, 4, 5}};
    int ans[2][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            ans[i][j] = mat1[j][i];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}