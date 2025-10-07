#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Function to detect cycle in an undirected graph starting from 'src'
    bool detect(int src, vector<int> adj[], int vis[]) {
        vis[src] = 1;  // mark the source node as visited

        // Queue to store pairs of {currentNode, parentNode}
        queue<pair<int,int>> q;
        q.push({src, -1});  // push the source with parent = -1 (since it has no parent)

        // Standard BFS traversal
        while (!q.empty()) {
            int node = q.front().first;   // current node
            int parent = q.front().second; // parent of this node
            q.pop();

            // Traverse all adjacent nodes (neighbors)
            for (auto adjacentNode : adj[node]) {
                if (!vis[adjacentNode]) {
                    // If the neighbor is not visited, mark and push into queue
                    vis[adjacentNode] = 1;
                    q.push({adjacentNode, node});
                }
                else if (parent != adjacentNode) {
                    // If the neighbor is already visited AND is not the parent,
                    // then we found a cycle
                    return true;
                }
            }
        }
        return false; // No cycle found from this source
    }

public:
    // Main function to detect cycle in the entire graph
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V]; 
        memset(vis, 0, sizeof(vis)); // initialize visited array with 0

        // Check every component of the graph
        for (int i = 0; i < V; i++) {
            if (!vis[i]) { // if node is not visited
                if (detect(i, adj, vis)) {
                    return true; // cycle found
                }
            }
        }
        return false; // no cycle in any component
    }
};

int main() {
    int V, E; 
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    // Adjacency list
    vector<int> adj[V];

    cout << "Enter " << E << " edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        // Since the graph is undirected, add edge both ways
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    Solution obj;
    if (obj.isCycle(V, adj)) {
        cout << "Graph contains a cycle\n";
    } else {
        cout << "Graph does not contain a cycle\n";
    }

    return 0;
}
