#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int v, vector<int> adj[]) {
    vector<int> vis(v, 0);  // visited array of size v initialized with 0
    vis[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto it : adj[node]) {
            if (!vis[it]) {  // if not visited
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    return bfs;
}

int main() {
    int v, e;
    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;

    vector<int> adj[v];
    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < e; i++) {
        int u, w;
        cin >> u >> w;
        adj[u].push_back(w);
        adj[w].push_back(u);  // remove this line if graph is directed
    }

    vector<int> bfs = bfsOfGraph(v, adj);

    cout << "BFS Traversal: ";
    for (auto it : bfs) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
