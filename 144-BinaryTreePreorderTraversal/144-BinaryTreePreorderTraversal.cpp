// Last updated: 4/4/2026, 11:06:28 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        // Ro L R
        vector<int> ans;
        if(root == nullptr) return ans;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode* x=s.top();
            s.pop();
            ans.push_back(x->val);
            if(x->right!=nullptr)   s.push(x->right);
            if(x->left!=nullptr)    s.push(x->left);
        }
        return ans;
    }
};