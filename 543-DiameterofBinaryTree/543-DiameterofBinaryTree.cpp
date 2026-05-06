// Last updated: 5/6/2026, 3:01:48 PM
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
14int ans=0;
15    int f(TreeNode* root){
16        if(!root)   return 0;
17
18        int le=f(root->left);
19        int ri=f(root->right);
20        ans=max(ans,le+ri);
21        return 1+max(le,ri);
22    }
23
24    int diameterOfBinaryTree(TreeNode* root) {
25        f(root);
26        return ans;
27    }
28};