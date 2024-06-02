#include <iostream>
#include<vector>
using namespace std;

int main() {

    int size = 5;
    vector <vector <int>> ans(size);
    for(int i = 0; i < size; i++) {
        ans[i].resize(i+1);
        for(int j = 0; j < ans[i].size(); j++) {
            if(j == 0 || j == i) {
                ans[i][j] = 1;
            }
            else {
                ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
            }
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}