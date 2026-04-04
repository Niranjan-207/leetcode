// Last updated: 4/4/2026, 11:00:29 PM
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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(root==NULL)  return -1;

        queue<TreeNode*> q;
        q.push(root);
        vector<long long> ans;

        while(!q.empty()){
            int n=q.size();
            long long sum=0;
            for(int i=0;i<n;i++){
                TreeNode* cur=q.front();q.pop();

                sum+=(cur->val);
                if(cur->left)  q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            ans.push_back(sum);
        }

        if(ans.size()<k)    return -1;
        nth_element(ans.begin(),ans.end()-k,ans.end());
        return ans[ans.size()-k];
    }
};