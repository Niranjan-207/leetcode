// Last updated: 4/4/2026, 11:01:13 PM
class Solution {
public:
    vector<int> bfs(int pnode,vector<vector<int>>& network){
        vector<int> time(network.size(),-1);
        queue<int> q;
        q.push(pnode);
        time[pnode]=0;

        while(!q.empty()){
            int nodes=q.front();
            q.pop();

            for(auto node:network[nodes]){
                if(time[node]!=-1)  continue;

                q.push(node);
                time[node]=time[nodes]+1;
            }
        }
        return time;

    }

    int networkBecomesIdle(vector<vector<int>>& edges, vector<int>& patience) {
        vector<vector<int>> network(patience.size());
        for(auto edge:edges){
            network[edge[0]].push_back(edge[1]);
            network[edge[1]].push_back(edge[0]);
        }

        vector<int> time=bfs(0,network);

        int ans=0;
        for(int i=1;i<patience.size();i++){
            int lastSent=((2*time[i]-1)/patience[i])*patience[i];
            ans=max(ans,lastSent+2*time[i]);
        }
        return ans+1;
    }
};