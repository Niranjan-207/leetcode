// Last updated: 4/4/2026, 11:04:50 PM
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
    int check(TreeNode* root,long long k){
        if(!root)   return 0;
        int cnt=0;
        if(root->val == k) cnt++;
        cnt+=check(root->left,1ll*k-(root->val));
        cnt+=check(root->right,1ll*k-(root->val));
        return cnt;
    }

    
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)   return 0;
        return (check(root,targetSum)+
                pathSum(root->left,targetSum)+
                pathSum(root->right,targetSum));
    }
};