// Last updated: 4/4/2026, 11:06:46 PM
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
    void traverse(TreeNode* root,int sum,vector<int>& temp,vector<vector<int>>& ans,int k){
        if(root==NULL){
            return;
        }

        temp.push_back(root->val);
        sum+=root->val;

        if(root->left==NULL && root->right==NULL){
            if(sum==k)
                ans.push_back(temp);
            // return;
        }else{

            traverse(root->left,sum,temp,ans,k);
            //temp.pop();
            traverse(root->right,sum,temp,ans,k);
        }
        temp.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>> ans;
        //(root,currSum,currList,ans);
        vector<int> temp;
        traverse(root,0,temp,ans,targetSum);
        return ans;
    }
};