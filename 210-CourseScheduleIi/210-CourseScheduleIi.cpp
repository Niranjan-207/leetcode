// Last updated: 4/4/2026, 11:05:51 PM
class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(n);
        vector<int> indegree(n,0);

        for(vector<int>& edge:prerequisites){
            adj[edge[1]].push_back(edge[0]);
            indegree[edge[0]]++;
        }
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int course=q.front();
            q.pop();
            ans.push_back(course);

            for(int& pre:adj[course]){
                indegree[pre]--;
                if(indegree[pre]==0)    q.push(pre);
            }
        }
        if(ans.size()==n)   return ans;
        return {};
    }
};