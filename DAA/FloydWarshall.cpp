#include <bits/stdc++.h>
#define INF 100000
using namespace std;

vector <vector <int>> floydWarshall(vector <vector <int>> &graph) {
    int V = graph.size();
    for(int k = 0; k < V; k++) {
        for(int i = 0; i < V; i++ ){
            for(int j = 0; j < V; j++) {
                if(graph[i][j] > graph[i][k] + graph[k][j] && graph[k][j] != INF && graph[i][k] != INF) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }

    return graph;
}
int main() {

    vector <vector <int>> graph = {
                                    { 0, 5, INF, 10 },
                                    { INF, 0, 3, INF },
                                    { INF, INF, 0, 1 },
                                    { INF, INF, INF, 0 }
                                };

    vector < vector <int>> shortestPath = floydWarshall(graph);
    for(int i = 0; i < shortestPath.size(); i++ ){ 
        for(int j = 0; j < shortestPath[i].size(); j++) {
            if(shortestPath[i][j] == INF) {
                cout << "INF" << "\t";
            }
            else {
                cout << shortestPath[i][j] << "\t";
            }
        }
        cout << endl;
    }
    return 0;
}