#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x) , left(NULL) , right(NULL) {}


};

vector<int> preorderTraversal(TreeNode* root) {
    vector<int>result;
    
    if(root == NULL) {
        return result;
    }

    result.push_back(root->val);

    vector<int> left = preorderTraversal(root->left);
    vector<int> right = preorderTraversal(root->right);
}