#include <iostream>
#include <vector>
using namespace std;

bool checkPerfectMatrix(vector <vector <int>> &mat) {
    bool check = false;
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat.size(); j++) {
            if(j == i) {
                if(mat[i][j] != 0) {
                    check = true;
                }
            }
            else{
                if(mat[i][j] == 0) {
                    check = true;
                }
            }
        }
    }
    return check;
}

int main() {

    vector <vector <int>> mat = {{1, 0, 0},{0, 2, 0},{0, 0, 3}};

    bool check = checkPerfectMatrix(mat);
    cout << check << endl;
    return 0;
}