// Last updated: 4/4/2026, 11:02:48 PM
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
    vector<int> arr;
    void inorder(TreeNode* root){
        if(root==NULL)  return;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }

    TreeNode* balanceBST(int left,int right){
        if(left>right)  return nullptr;
        int mid=left+(right-left)/2;

        TreeNode* node=new TreeNode(arr[mid]);
        node->left=balanceBST(left,mid-1);
        node->right=balanceBST(mid+1,right);
        return node;
    }

    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);

        return balanceBST(0,arr.size()-1);
    }
};