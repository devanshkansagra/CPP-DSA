// Move zeros to end
#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector <int> &nums) {
    vector <int> temp;
    int n = nums.size();
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != 0) {
            temp.push_back(nums[i]);
        }
    }    

    int t = temp.size();
    nums.clear();

    for(int i = 0; i < t; i++) {
        nums.push_back(temp[i]);
    }

    int i = 0;
    while(i < n - t) {
        nums.push_back(0);
        i += 1;
    }

}
int main() {

    vector <int> v = {0,1,0,3,12};
    moveZeros(v);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    } 
    cout << endl;
    return 0;
}