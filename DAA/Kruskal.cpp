// C++ program for the above approach 

#include <bits/stdc++.h> 
using namespace std; 

// DSU data structure 
// path compression + rank by union 
class DSU {
	int *parent;
	int *rank;

	public:
		DSU(int V) {

			parent = new int[V];
			rank = new int[V];
			for(int i = 0; i < V; i++) {
				parent[i] = -1;
				rank[i] = -1;
			}
		}

		int find(int i) {
			if(parent[i] == -1) {
				return i;
			}
			return parent[i] = find(parent[i]);
		}

		void unite(int x, int y) {
			int s1 = find(x);
			int s2 = find(y);

			if(s1 != s2) {
				if(rank[s1] < rank[s2]) {
					parent[s1] = s2;
				}
				else if(rank[s2] < rank[s1]) {
					parent[s2] = s1; 
				}
				else {
					parent[s2] = s1;
					rank[s1] += 1;
				}
			}
		}
};

class Graph {
	int V;
	vector <vector <int>> edges;

	public:
		Graph(int V) {
			this->V = V;
		}

		void addEdge(int x, int y, int w) {
			edges.push_back({w, x, y});
		}

		void kruskals_mst() {
			sort(edges.begin(), edges.end());

			DSU s(V);
			int ans = 0;

			for(vector <int> edge: edges) {
				int w = edge[0];
				int x = edge[1];
				int y = edge[2];

				if(s.find(x) != s.find(y)) {
					s.unite(x, y);
					ans += w;

					cout << x  << " -- " << y << " == " << w << endl;
				}
			}

			cout << "Minimum cost of spanning tree: " << ans << endl;
		}
};

// Driver code 
int main() 
{ 
	Graph g(4); 
	g.addEdge(0, 1, 10); 
	g.addEdge(1, 3, 15); 
	g.addEdge(2, 3, 4); 
	g.addEdge(2, 0, 6); 
	g.addEdge(0, 3, 5); 

	// Function call 
	g.kruskals_mst(); 

	return 0; 
}
