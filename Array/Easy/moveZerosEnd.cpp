// Move zeros to end
#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector <int> &nums) {
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0) {
            for(int j = i; j < nums.size(); j++) {
                swap(nums[j], nums[j+1]);
            }
        }
    }
}
int main() {

    vector <int> v = {0};
    moveZeros(v);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    } 
    cout << endl;
    return 0;
}