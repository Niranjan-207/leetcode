// Last updated: 5/6/2026, 2:02:17 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    TreeNode* solve(TreeNode* root){
15        if(!root)   return nullptr;
16        TreeNode* le=solve(root->left);
17        TreeNode* ri=solve(root->right);
18        
19        root->left=ri;
20        root->right=le;
21        return root;
22    }
23
24    TreeNode* invertTree(TreeNode* root) {
25        if(!root)   return root;
26        return solve(root);
27    }
28};