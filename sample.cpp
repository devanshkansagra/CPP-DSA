#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector <int> nums = {-1,0,1,2,-1,-4};
    int minElementPos = 0;

    for(int i = 0; i < nums.size(); i++) {
        minElementPos = i;
        for(int j = i+1; j < nums.size(); j++) {
            if(nums[j] < nums[minElementPos]) {
                minElementPos = j;
            }
        }
        if(i != minElementPos) {
            swap(nums[i], nums[minElementPos]);
        }
    }

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}