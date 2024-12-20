// A C++ program for Prim's Minimum
// Spanning Tree (MST) algorithm. The program is
// for adjacency matrix representation of the graph

#include <bits/stdc++.h>
using namespace std;

// Number of vertices in the graph
#define V 5

int minKey(vector<int> &key, vector<bool> &mstSet) {
  
    // Initialize min value
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min) {
            min = key[v];
            min_index = v;
        }

    return min_index;
}

void primMST(vector<vector<int>> &graph) {
  
    vector<int> parent(V);
    vector<int> key(V);
    vector<bool> mstSet(V);

    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;

    key[0] = 0;
  
    parent[0] = -1;

    int minCost = 0;

    // The MST will have V vertices
    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = true;
        for (int v = 0; v < V; v++)
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) {
                    parent[v] = u;
                    key[v] = graph[u][v];
                }
    }

    for(int i = 1; i < V; i++) {
        minCost += graph[parent[i]][i];
    }

    // Print the constructed MST
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t"
             << graph[parent[i]][i] << " \n";

    cout << "Minimum cost: " << minCost << endl;
}

// Driver's code
int main() {
      vector<vector<int>> graph = { { 0, 2, 0, 6, 0 },
                                { 2, 0, 3, 8, 5 },
                                { 0, 3, 0, 0, 7 },
                                { 6, 8, 0, 0, 9 },
                                { 0, 5, 7, 9, 0 } };

    // Print the solution
    primMST(graph);

    return 0;
}

// This code is contributed by rathbhupendra
