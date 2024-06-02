#include<bits/stdc++.h>
using namespace std;


int fact(int n) {

    // Base Case
    if(n == 1) {
        return 1;
    }

    // Assumption
    int ans = n * fact(n-1);    // fact(n-1) -> self work
    return ans;
}
int main() {

    int n = INT_MAX;
    int ans = fact(n);
    cout << "Factorial of " << n << " is: " << ans << endl; 
    return 0;
}