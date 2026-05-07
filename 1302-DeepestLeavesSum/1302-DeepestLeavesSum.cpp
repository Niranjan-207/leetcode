// Last updated: 5/7/2026, 10:43:05 PM
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
14    int deepestLeavesSum(TreeNode* root) {
15        //if(!root)   return -1;
16        queue<TreeNode*> q;
17        q.push(root);
18
19        int sum=0;
20        while(!q.empty()){
21            int n=q.size();
22            sum=0;
23            for(int i=0;i<n;i++){
24                TreeNode* cur=q.front();
25                sum+=(cur->val);
26                q.pop();
27
28                if(cur->left)   q.push(cur->left);
29                if(cur->right)  q.push(cur->right);
30            }
31        }
32        return sum;
33    }
34};