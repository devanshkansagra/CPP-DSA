#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <vector <int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int top = 0;
    int left = 0;
    int bottom = mat.size()-1;
    int right = mat[0].size()-1;
    int direction = 0;

    while(left <= right && top <= bottom) {

        // Left -> Right;
        if(direction == 0) {
            for(int col = left; col <= right; col++) {
                cout << mat[top][col] << " ";
            }
            top += 1;
        }

        // Top -> Bottom 
        else if(direction == 1) {
            for(int row = top; row <= bottom; row++) {
                cout << mat[row][right] <<  " ";
            }
            right -= 1;
        }

        // Right -> left
        else if(direction == 2) {
            for(int col = right; col >= left; col--) {
                cout << mat[bottom][col] << " ";
            }
            bottom -= 1;
        }
        
        // Bottom -> Top
        else {
            for(int row = bottom; row >= top; row--) {
                cout << mat[row][left] << " ";
            }
            left += 1;
        }
        direction = (direction + 1) % 4;
    }
    cout << endl;
    return 0;
}