#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> result;

//         if (root == NULL) {
//             return result;
//         }

//         result.push_back(root->val);
        
//         vector<int> left = preorderTraversal(root->left);
//         vector<int> right = preorderTraversal(root->right);

//         result.insert(result.end(), left.begin(), left.end());
//         result.insert(result.end(), right.begin(), right.end());

//         return result;
//     }
// };

// int main() {
//     TreeNode* root = new TreeNode(1);
//     root->right = new TreeNode(2);
//     root->right->left = new TreeNode(3);

//     Solution sol;
//     vector<int> result = sol.preorderTraversal(root);

//     cout << "Preorder Traversal: ";
//     for (int val : result) {
//         cout << val << " ";
//     }

//     return 0;
// }



// /////////////////iterative perorder 


vector<int> preorderTraversal(TreeNode* root) {
    vector<int> preorder;
    if(root == NULL ) return preorder;

    stack<TreeNode*> st;
    st.push(root);
    while( !st.empty()) {
        root = st.top();
        st.pop();
        preorder.push_back(root -> val);
        if(root -> right != NULL){
            st.push(root ->right);
        }
        if(root ->left != NULL) {
            st.push(root -> left);
        }
    }
    return preorder;
}
};
 int main() {
     TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution sol;
    vector<int> result = sol.preorderTraversal(root);

    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
 }