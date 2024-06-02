#include<bits/stdc++.h>
using namespace std;

int main() {

    queue <int> q;
    for(int i = 1; i <= 5; i++) {
        cout << "Element inserted " << i << endl;
        q.push(i);
    }
    cout << "Size of queue: " << q.size() << endl;

    cout << "First element: " << q.front() << endl;
    cout << "Last Element: " << q.back() << endl;

    for(int i = 1; i <= 5; i++) {
        cout << "Element removed: " << i << endl;
        q.pop();
    }
    cout << "Size of queue: " << q.size() << endl;
    return 0;
}