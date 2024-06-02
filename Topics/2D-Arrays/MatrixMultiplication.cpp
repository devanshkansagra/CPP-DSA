#include <iostream>
using namespace std;

int main() {

    int mat1[3][3] = {{1, 1, 1},{1, 1, 1},{1, 1, 1}};
    int mat2[3][3] = {{1, 1, 1},{1, 1, 1},{1, 1, 1}};

    int ans[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}