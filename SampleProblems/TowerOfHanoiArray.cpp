#include<bits/stdc++.h>
using namespace std;

void moveDisk(vector <int> &source, vector <int> &dest) {
    dest.push_back(source.back());
    source.pop_back();
}

void towerOfHanoi(int n, vector <int> &source, vector <int> &dest, vector <int> &aux, int from, int to) {
    if(n == 0) {
        return;
    }
    towerOfHanoi(n-1, source, aux, dest, from, 6-from-to);
    moveDisk(source, dest);
    cout << "Moved disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n-1, aux, dest, source, 6 - from -to, to);

}
int main() {

    int n = 3;

    vector <int> source, aux, dest;
    for(int i = n; i >= 0; i--) {
        source.push_back(i);
    }
    towerOfHanoi(n, source, dest, aux, 1, 3);
    return 0;
}