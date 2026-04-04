// Last updated: 4/4/2026, 11:04:20 PM
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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root==nullptr)   return {};

        vector<double> ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int n=q.size();
            double vals=0;
            for(int i=0;i<n;i++){
                TreeNode* x=q.front();
                q.pop();

                vals+=(x->val);
                if(x->left!=nullptr) q.push(x->left);
                if(x->right!=nullptr)   q.push(x->right);
            }
            ans.push_back(vals/n);
        }
        return ans;
    }
};