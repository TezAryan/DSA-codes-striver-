#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // Step 1: Build adjacency list and indegree array
        vector<int> adj[V];
        vector<int> indegree(V, 0);
        
        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            indegree[v]++;
        }
        
        // Step 2: Push all nodes with indegree 0 into queue
        queue<int> q;
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) q.push(i);
        }
        
        // Step 3: BFS
        vector<int> topo;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            
            for (auto it : adj[node]) {
                indegree[it]--;
                if (indegree[it] == 0) q.push(it);
            }
        }
        
        return topo;
    }
};

// ✅ Helper function to check if output is a valid topo sort
bool checkTopo(int V, vector<int>& res, vector<vector<int>>& edges) {
    if (res.size() != V) return false;
    vector<int> pos(V);
    for (int i = 0; i < V; i++) pos[res[i]] = i;
    for (auto &e : edges) {
        int u = e[0], v = e[1];
        if (pos[u] > pos[v]) return false; // u must come before v
    }
    return true;
}

int main() {
    // Example 1
    int V1 = 4;
    vector<vector<int>> edges1 = {{3,0}, {1,0}, {2,0}};
    Solution obj1;
    vector<int> ans1 = obj1.topoSort(V1, edges1);
    cout << "Topo Sort (Example 1): ";
    for (int x : ans1) cout << x << " ";
    cout << "\nValid? " << (checkTopo(V1, ans1, edges1) ? "true" : "false") << "\n\n";
    
    // Example 2
    int V2 = 6;
    vector<vector<int>> edges2 = {{1,3}, {2,3}, {4,1}, {4,0}, {5,0}, {5,2}};
    Solution obj2;
    vector<int> ans2 = obj2.topoSort(V2, edges2);
    cout << "Topo Sort (Example 2): ";
    for (int x : ans2) cout << x << " ";
    cout << "\nValid? " << (checkTopo(V2, ans2, edges2) ? "true" : "false") << "\n";

    return 0;
}
