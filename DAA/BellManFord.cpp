#include <bits/stdc++.h>
#define INF 1e9
using namespace std;
vector <int> bellmanFord(vector <vector <int>> &edges, int src) {
    int V = edges.size();

    vector <int> dist(V, INF);
    dist[src] = 0;

    for(int i = 0; i < V; i++) {
        for(vector <int> edge: edges) {
            int u = edge[0];
            int v = edge[1];
            int weight = edge[2];
            if(dist[u] != INF && dist[u] + weight < dist[v]) {
                if(i == V-1) {
                    return {-1};
                }
                dist[v] = dist[u] + weight;
            }

        } 
    }

    return dist;
}
int main() {

    vector <vector <int>> edges = {{{1, 3, 2}, {4, 3, -1}, {2, 4, 1},  {1, 2, 1}, {0, 1, 5}}};
    int src = 0;
    vector <int> bf = bellmanFord(edges, src);

    cout << "Shortest path: ";
    for(int i = 0; i < bf.size(); i++) {
        cout << bf[i] << " ";
    }
    cout << endl;
    return 0;
}