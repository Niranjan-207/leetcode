// Last updated: 4/4/2026, 11:06:48 PM
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
    bool traverse(TreeNode* root,int sum,int k){
        if(root==nullptr)   return false;
        sum+=root->val;
        if(root->left==nullptr && root->right==nullptr){
            return sum==k;
        }
        return traverse(root->left,sum,k) || traverse(root->right,sum,k);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return traverse(root,0,targetSum);
    }
};