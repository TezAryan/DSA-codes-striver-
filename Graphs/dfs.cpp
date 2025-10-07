#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls) {
    vis[node] = 1;             // mark as visited
    ls.push_back(node);        // store the traversal
    for (auto it : adj[node]) {   //traverse all the nodes
        if (!vis[it]) {
            dfs(it, adj, vis, ls);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    int vis[V] = {0};         // visited array
    int start = 0;            // starting node
    vector<int> ls;
    dfs(start, adj, vis, ls);
    return ls;
}

int main() {
    int V = 5;  // number of vertices
    vector<int> adj[V];

    // Example graph (undirected)
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    // Perform DFS
    vector<int> res = dfsOfGraph(V, adj);

    cout << "DFS Traversal: ";
    for (int node : res) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
