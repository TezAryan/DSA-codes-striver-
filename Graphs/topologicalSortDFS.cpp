


#include <bits/stdc++.h>   // Includes all standard C++ libraries
using namespace std;

class Solution {
private:
    // Depth First Search (DFS) helper function
    void dfs(int node, int vis[], stack<int> &st, vector<int> adj[]) {
        vis[node] = 1;  // Mark the current node as visited

        // Traverse all adjacent (connected) nodes
        for (auto it : adj[node]) {
            if (!vis[it])  // If the adjacent node is not visited
                dfs(it, vis, st, adj);  // Recursively call DFS for that node
        }

        // Once all adjacent nodes are processed, push the current node into the stack
        // This ensures that nodes are pushed after all their dependencies are visited
        st.push(node);
    }

public:
    // Function to perform Topological Sort using DFS
    vector<int> topoSort(int V, vector<int> adj[]) {
        int vis[V] = {0};  // Visited array initialized to 0 (unvisited)
        stack<int> st;     // Stack to store the topological order in reverse

        // Perform DFS for every unvisited node (in case of disconnected components)
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, vis, st, adj);  // Call DFS starting from node 'i'
            }
        }

        vector<int> ans;  // To store the final topological order

        // Pop all elements from stack and add to the answer
        while (!st.empty()) {
            ans.push_back(st.top());  // Top element of stack added to result
            st.pop();                 // Remove element from stack
        }

        return ans;  // Return the topological order
    }
};

// ---------------------------
// Driver Code (for testing)
// ---------------------------
int main() {
    int V = 6;  // Number of vertices (example: 6 nodes)
    vector<int> adj[V];  // Adjacency list

    // Example directed graph edges
    adj[5].push_back(0);
    adj[5].push_back(2);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    // Create object of Solution class
    Solution obj;

    // Get the topological order
    vector<int> result = obj.topoSort(V, adj);

    // Print the result
    cout << "Topological Sort Order: ";
    for (auto node : result)
        cout << node << " ";
    cout << endl;

    return 0;
}
