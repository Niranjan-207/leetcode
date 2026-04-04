// Last updated: 4/4/2026, 11:05:29 PM
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
vector<string> s;
    void iterate(TreeNode* root,string ans){
        if(root->left==nullptr && root->right==nullptr){
            ans+=(to_string(root->val));
            s.push_back(ans);
            return;
        }

        if(root->left!=nullptr)    iterate(root->left,ans+(to_string(root->val)+"->"));
        if(root->right!=nullptr)    iterate(root->right,ans+(to_string(root->val)+"->"));
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root)   return {};
        iterate(root,"");
        return s;
    }
};