// Fibonacci Series: 0 1 1 2 3 5 8 13...
#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }

    int ans = fib(n-1) + fib(n-2);
    return ans;
}
int main() {

    int ans = fib(3);
    cout << ans <<endl;
    return 0;
}