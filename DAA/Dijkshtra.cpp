#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minDistance(const vector<int>& dist, const vector<bool>& sptSet) {
    int min = INT16_MAX;
    int min_index = -1;
    for (int i = 0; i < dist.size(); i++) {
        if (!sptSet[i] && dist[i] <= min) {
            min = dist[i];
            min_index = i;
        }
    }
    return min_index;
}

void dijkstra(const vector<vector<int>>& graph, int src) {
    vector<int> dist(graph.size(),INT16_MAX);
    vector<bool> sptSet(graph.size(), false);
    dist[src] = 0;

    for (int count = 0; count < graph.size() - 1; count++) {
        int minD = minDistance(dist, sptSet);
        sptSet[minD] = true;

        for (int i = 0; i < graph.size(); i++) {
            if (!sptSet[i] && graph[minD][i] && dist[minD] != INT16_MAX &&
                dist[minD] + graph[minD][i] < dist[i]) {
                dist[i] = dist[minD] + graph[minD][i];
            }
        }
    }
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < dist.size(); i++) {
        cout << i << " \t\t " << dist[i] << endl;
    }
}

int main() {
    vector<vector<int>> graph = {
        {0, 10, 0, 0, 5},
        {10, 0, 1, 0, 2},
        {0, 1, 0, 4, 0},
        {0, 0, 4, 0, 3},
        {5, 2, 0, 3, 0}
    };
    cout << "Generated adjacency matrix:" << endl;
    for (const auto& row : graph) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    dijkstra(graph,0);
   
    return 0;
}