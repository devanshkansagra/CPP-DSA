#include<bits/stdc++.h>
using namespace std;

int min(vector <int> &nums, int sizeV) {

    nums.resize(sizeV);

    int minEle = INT_MIN;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] > minEle) {
            minEle = nums[i];
        }
    }

    return minEle;
}
int main() {

    vector <int> v = {20, 50, 40, 10, 30};
    int size = v.size();

    int minEle = 0;
    for(int i = 0; i < size; i++) {
        for(int j = size; j >= 0; j--) {
            minEle = min(v, j);
            swap(v[j], minEle);
        }
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
    
}