// Last updated: 4/4/2026, 11:06:49 PM
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
    int depth(TreeNode* root){
        //if(root==nullptr)   return 0;
        if(root->left==nullptr && root->right==nullptr) return 1;
        int l=INT_MAX,r=INT_MAX;
        if(root->left!=nullptr) l=depth(root->left);
        if(root->right!=nullptr) r=depth(root->right);
        return 1+min(l,r);
    }

    int minDepth(TreeNode* root) {
        
        if(root==nullptr)   return 0;
        return depth(root);
    }
};