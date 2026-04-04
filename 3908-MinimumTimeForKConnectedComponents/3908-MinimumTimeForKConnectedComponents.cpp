// Last updated: 4/4/2026, 10:59:19 PM
class Solution {
public:
    int components(vector<vector<pair<int,int>>>& adj,int n,int t){
        vector<bool> vis(n,false);
        int count=0;

        function<void(int)> dfs=[&](int u){
            vis[u]=true;
            for(auto& [v,time]:adj[u]){
                if(!vis[v] && time>t)
                    dfs(v);
            }
        };

        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i);
                count++;
            }
        }
        return count;
        
    }
    void adjMat(vector<vector<int>>& edges,vector<vector<pair<int,int>>>& adj){
        for(auto& e:edges ){
            int u=e[0];
            int v=e[1];
            int t=e[2];
            adj[u].emplace_back(v,t);
            adj[v].emplace_back(u,t);
        }
    }
    
    int minTime(int n, vector<vector<int>>& edges, int k) {
        vector<vector<pair<int,int>>> adj(n);
        adjMat(edges,adj);

        int l=0;
        int h=1e9;
        
        int ans=0;
        while(l<=h){
            int m=l+(h-l)/2;

            int connected=components(adj,n,m);
            
            if(connected>=k){
                ans=m;
                h=m-1;
            }
            else    l=m+1;
        }
        return ans;
    }
};