#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;
bool vis[N];
vector <int> adj[N];

void dfs(int node) {

    // preorder
    vis[node] = true;
    // cout << node << " ";

    // inorder
    vector <int> :: iterator it;
    for(it = adj[node].begin(); it != adj[node].end(); it++) {
        if(vis[*it]);
        else {
            dfs(*it);
        }
    }

    // postorder
    cout << node << " ";
}
int main() {

    int n, e;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> e;

    for(int i = 0; i < N; i++) {
        vis[i] = false;
    }
    int x, y;
    cout << "Enter edges: " << endl;
    for(int i = 0; i < e; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    } 

    dfs(1);
    return 0;
}