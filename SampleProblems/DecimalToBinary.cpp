#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int n = 7;
    string r;
    while (n != 0)
    {
        r = (n % 2 == 0 ? "0" : "1") + r;
        n /= 2;
    }
    cout << r << endl;
    cout << endl;
    return 0;
}