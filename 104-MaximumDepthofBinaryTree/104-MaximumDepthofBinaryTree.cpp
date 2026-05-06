// Last updated: 5/6/2026, 2:32:28 PM
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
14    TreeNode* reverseOddLevels(TreeNode* root) {
15        if(!root)   return root;
16        queue<TreeNode*> q;
17        q.push(root);
18        int lev=0;
19        while(!q.empty()){
20            int n=q.size();
21            vector<TreeNode*> nodes;
22            for(int i=0;i<n;i++){
23                TreeNode* cur=q.front();
24                q.pop();
25                nodes.push_back(cur);
26
27                if(cur->left)   q.push(cur->left);
28                if(cur->right)  q.push(cur->right);
29            }
30
31            if(lev%2==1){
32                int l=0,r=nodes.size()-1;
33                while(l<r){
34                    swap(nodes[l++]->val,nodes[r--]->val);
35                }
36            }
37            lev++;
38        }
39        return root;
40    }
41};