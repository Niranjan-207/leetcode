// Last updated: 4/4/2026, 11:05:54 PM
class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> indegree(n);
        vector<vector<int>> adj(n);

        for(vector<int> edge:prerequisites){
            adj[edge[1]].push_back(edge[0]);
            indegree[edge[0]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        int completed=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            completed++;

            for(int pre:adj[node]){
                indegree[pre]--;
                if(indegree[pre]==0)
                    q.push(pre);
            }

        }
        return completed==n;
    }
};