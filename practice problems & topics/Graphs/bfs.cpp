#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;
bool vis[N];
vector <int> adj[N];

int main() {

    for(int i = 0; i < N; i++) {
        vis[i] = 0;
    }

    int n, e;    // Number of Nodes and edges
    cout << "Enter total number of nodes and edges: ";
    cin >> n >> e;

    // input edges
    int x, y;

    cout << "Enter the edges: " << endl;
    for(int i = 0; i < e; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue <int> q;
    q.push(1);
    vis[1] = true;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        vector <int> :: iterator it;
        for(it = adj[node].begin(); it != adj[node].end(); it++) {
            if(!vis[*it]) {
                vis[*it] = 1;
                q.push(*it);
            }
        }
    }
    return 0;
}