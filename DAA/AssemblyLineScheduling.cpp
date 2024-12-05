#include <bits/stdc++.h>
using namespace std;

int assemblyLine(vector <int> &a1, vector <int> &a2, vector <int> &t1, vector <int> &t2, int e1, int e2, int x1, int x2) {
    int n = a1.size();

    vector <int> T1(n);
    vector <int> T2(n);

    vector <int> path1(n-1);
    vector <int> path2(n-1);

    T1[0] = e1 + a1[0];
    T2[0] = e2 + a2[0];

    for(int i = 1; i < n; i++) {
        if(T1[i-1] + a1[i] < T2[i-1] + t2[i-1] + a1[i]) {
            T1[i] = T1[i-1] + a1[i];
            path1[i-1] = 1;
        }
        else {
            T1[i] = T2[i-1] + t2[i-1] + a1[i];
            path1[i-1] = 2;
        }
        if(T2[i-1] + a2[i] < T1[i-1] + t1[i-1] + a2[i]) {
            T2[i] = T2[i-1] + a2[i];
            path2[i-1] = 1;
        }
        else {
            T2[i] = T1[i-1] + t1[i-1] + a2[i];
            path2[i-1] = 2;
        }
    }

    int minTime = min(T1[n-1] + x1 , T2[n-1] + x2);
    reverse(path1.begin(), path1.end());
    reverse(path2.begin(), path2.end());

    for(int i = 0; i < T1.size();i++) {
        cout << T1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < T2.size();i++) {
        cout << T2[i] << " ";
    }
    cout << endl;
    cout << endl;

    for(int i = 0; i < path1.size(); i++) {
        cout << path1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < path2.size(); i++) {
        cout << path2[i] << " ";
    }
    cout << endl;

    return minTime;
}
int main() {

    vector <int> a1 = {12, 5, 7, 6, 12, 4};
    vector <int> a2 = {7, 11, 3, 2, 15, 9};

    vector <int> t1 = {2, 4, 6, 10, 8};
    vector <int> t2 = {1, 3, 5, 9, 7};

    int e1 = 8;
    int e2 = 6;

    int x1 = 12;
    int x2 = 2;

    int minTime = assemblyLine(a1, a2, t1, t2, e1, e2, x1, x2);
    cout << "Minimum time to reach at the end: " << minTime << endl;
    return 0;
}