// Find the Largest element in the array

#include <bits/stdc++.h>
using namespace std;

int largest(vector <int> &v) {
    int maxEle = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] > maxEle) {
            maxEle = v[i];
        }
    }
    return maxEle;
}

int largestRecursive(vector <int> v, int n) {
    if(n == 1) {
        return v[0];
    }

    return max(v[n-1], largestRecursive(v, n-1));
}
int main() {

    vector <int> v = {4, 1, 5, 2, 3};
    int largestEle = largest(v);
    cout << "Largest element is: " << largestEle << endl;

    int largestEleR = largestRecursive(v, v.size());
    cout << "Largest element in recursive is: " << largestEleR << endl;
    return 0;
}