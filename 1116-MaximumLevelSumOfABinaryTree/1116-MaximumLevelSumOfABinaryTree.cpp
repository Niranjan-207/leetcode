// Last updated: 4/4/2026, 11:02:57 PM
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
    void solve(TreeNode* root,int level,map<int,int>& mp){
        if(root==NULL)  return;

        mp[level]+=(root->val);
        solve(root->left,level+1,mp);
        solve(root->right,level+1,mp);
    }

    int maxLevelSum(TreeNode* root) {
        if(root==NULL)  return 0;
        map<int,int> mp;
        solve(root,1,mp);
        int bl=0,bs=INT_MIN;
        for(auto& [lev,sum]:mp){
            if(sum>bs){
                bs=sum;
                bl=lev;
            }
        }
        return bl;
    }
};