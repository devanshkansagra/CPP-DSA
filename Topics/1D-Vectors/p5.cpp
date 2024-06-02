// Find the difference between the sum of elements at even indices and Sum of elements at odd indices
#include <iostream>
#include<vector>
using namespace std;

int main() {

    vector <int> v;
    v = {1, 2, 1, 2, 1, 2};

    // Approach 1
    int evenSum = 0;
    int oddSum = 0;
    for(int i = 0; i < v.size(); i++) {
        if(i%2 == 0) {
            evenSum += v[i];
        }
        else {
            oddSum += v[i];
        }
    }

    cout << evenSum - oddSum << endl;

    // Approach 2
    int ansSum = 0;
    for(int i = 0; i < v.size(); i++) {
        if(i%2 == 0) {
            ansSum += v[i];
        }
        else {
            ansSum -= v[i];
        }
    }
    cout << ansSum << endl;
    return 0;
}