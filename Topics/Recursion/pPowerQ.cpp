#include <iostream>
#include <math.h>
using namespace std;

// int f(int p, int q) {

//     // You can use any one of these base cases
//     if(q == 0) {
//         return 1;
//     }

//     if(q == 1) {
//         return p;
//     }

//     return f(p, q-1) * p;
// }

// Optimized Approach

int f(int p, int q)
{
    if (q == 0)
    {
        return 1;
    }
    if (q == 1)
    {
        return p;
    }

    if (q % 2 == 0)
    {
        int ans = pow(f(p, q / 2), 2);
        return ans;
    }
    else
    {
        int ans = p * pow(f(p, ((q - 1) / 2)), 2);
        return ans;
    }
}
int main()
{

    int p = 2;
    int q = 3;
    cout << f(p, q);
    return 0;
}