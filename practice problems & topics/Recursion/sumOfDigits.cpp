#include<iostream>
using namespace std;

int f(int n) {
    if(n >= 0 and n <= 9) {
        return n;
    }
    int last = n % 10;
    n = n / 10;
    return f(n) + last;

}
int main() {

    int num = 1234;
    int ans = f(num);
    cout << ans;
    // int sum = 0;
    // for(int i = 1; num != 0; i++) {
    //     int last = num % 10;
    //     num = num / 10;
    //     cout << num << endl;
    // }
    return 0;
}