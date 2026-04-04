// Last updated: 4/4/2026, 11:03:36 PM
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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(root==NULL)  return nullptr;

        unordered_map<TreeNode*,TreeNode*> parent;
        queue<TreeNode*> q;

        q.push(root);
        parent[root]=nullptr;

        vector<TreeNode*> last;
        while(!q.empty()){
            int size=q.size();
            last.clear();

            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                last.push_back(node);

                if(node->left){
                    parent[node->left]=node;
                    q.push(node->left);
                }
                if(node->right){
                    parent[node->right]=node;
                    q.push(node->right);
                }
            }
        }

        unordered_set<TreeNode*> se(last.begin(),last.end());
        while(se.size()>1){
            unordered_set<TreeNode*> temp;
            for(auto node:se){
                temp.insert(parent[node]);
            }
            se=temp;
        }
        return *se.begin();
    }
};