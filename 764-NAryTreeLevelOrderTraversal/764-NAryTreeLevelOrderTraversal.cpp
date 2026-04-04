// Last updated: 4/4/2026, 11:03:54 PM
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/ 
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL)  return {};
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        // ans.push_back(root->val);

        while(!q.empty()){
            int n=q.size();
            vector<int> level(n);
            for(int i=0;i<n;i++){
                Node* pnode=q.front();
                level[i]=(pnode->val);
                q.pop();

                for(auto node:pnode->children) q.push(node);
            }
            ans.push_back(level);
        }
        return ans;
    }
};