// Last updated: 4/4/2026, 11:05:39 PM
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
    int idx=0,value=0;
    void inorder(TreeNode* node){
        if(node==nullptr)   return;
        inorder(node->left);
        idx--;
        if(idx==0){
            value=node->val;
        }
        inorder(node->right);
    }

    int kthSmallest(TreeNode* root, int k) {
        idx=k;
        inorder(root);
        return value;
    }
};