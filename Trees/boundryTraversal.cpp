//at first travel left side of the tree
//then travel to the leaf nodes and 
//then travel right side of the tree but store the right side on stack and then pop it to main vector ans 

#include <bits/stdc++.h>
using namespace std;

// Definition of Binary Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    } 
};

class Solution {
    // check if node is a leaf
    bool isLeaf(Node* node) {
        return (node->left == NULL && node->right == NULL);
    }

    // add left boundary excluding leaf nodes
    void addLeftBoundary(Node *root, vector<int> &res) {
        Node* cur = root->left;
        while(cur) {
            if(!isLeaf(cur)) res.push_back(cur->data);
            if(cur->left) cur = cur->left;
            else cur = cur->right;
        }
    }

    // add right boundary excluding leaf nodes
    void addRightBoundary(Node *root, vector<int> &res) {
        Node* cur = root->right;
        vector<int> tmp;
        while(cur) {
            if(!isLeaf(cur)) tmp.push_back(cur->data);
            if(cur->right) cur = cur->right;
            else cur = cur->left;
        }
        // add in reverse order
        for(int i = tmp.size() - 1; i >= 0; --i) {
            res.push_back(tmp[i]);
        }
    }

    // add all leaf nodes
    void addLeaves(Node* root, vector<int>& res) {
        if(isLeaf(root)) {
            res.push_back(root->data);
            return;
        }
        if(root->left) addLeaves(root->left, res);
        if(root->right) addLeaves(root->right, res);
    }

public:
    vector<int> boundaryTraversal(Node *root) {
        vector<int> res;
        if(!root) return res;
        if(!isLeaf(root)) res.push_back(root->data);
        addLeftBoundary(root, res);
        addLeaves(root, res);
        addRightBoundary(root, res);
        return res;
    }
};

// Driver code
int main() {
    /*
             1
           /   \
          2     3
         / \   / \
        4   5 6   7
           / \
          8   9
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(8);
    root->left->right->right = new Node(9);

    Solution sol;
    vector<int> ans = sol.boundaryTraversal(root);

    cout << "Boundary Traversal: ";
    for(int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
