#include <iostream>
using namespace std;

int fact(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}
int main() {

    int length = 5;
    int nCr;
    for(int n = 0; n < length; n++) {
        for(int r = 0; r <= n; r++) {
            nCr = (fact(n))/((fact(r))*(fact(n-r)));
            cout << nCr << " ";
        }
        cout << endl;
    }
    return 0;
}