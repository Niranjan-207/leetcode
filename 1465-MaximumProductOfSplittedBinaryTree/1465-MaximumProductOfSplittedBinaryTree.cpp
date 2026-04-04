// Last updated: 4/4/2026, 11:02:24 PM
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
    int MOD=1e9+7;
    long long ans=0;
    long long fsum(TreeNode* root){
        if(root==NULL)  return 0;

        return (root->val)+fsum(root->left)+fsum(root->right);
    }
    int solve(TreeNode* root,long long& sum){
        if(root==NULL)  return 0;

        long long left=solve(root->left,sum);
        long long right=solve(root->right,sum);
        long long sub=left+right+(root->val);

        ans=max(ans,sub*(sum-sub));
        return sub;
    }

    int maxProduct(TreeNode* root) {
        long long sum=fsum(root);
       
        solve(root,sum);
        return ans%MOD;
    }
};