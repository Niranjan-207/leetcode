// Last updated: 4/4/2026, 11:00:11 PM
class Solution {
public:
    void dijkstra(int src,vector<pair<int,int>> adj[],vector<int>& dis){
        priority_queue< pair<int,int>,vector<pair<int,int>>,greater<>> pq;

        dis[src]=0;
        pq.push({0,src});
        while(!pq.empty()){
            auto [d,u]=pq.top();
            pq.pop();
            if(d>dis[u])    continue;
            for(auto [adjNode,weight]:adj[u]){
                if(weight+d < dis[adjNode]){
                    dis[adjNode]=weight+d;
                    pq.push({dis[adjNode],adjNode});
                }
            }
        }

    }

    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        if(source.size()!=target.size())    return -1;

        vector<pair<int,int>> adj[26];
        for(int i=0;i<original.size();i++){
            adj[original[i]-'a'].push_back({changed[i]-'a',cost[i]});
        }

        vector<vector<int>> dis(26,vector<int> (26,INT_MAX));

        for(int i=0;i<26;i++){
            dijkstra(i,adj,dis[i]);
        }

        long long ans=0;
        for(int i=0;i<source.size();i++){
            int u=source[i]-'a';
            int v=target[i]-'a';

            if(u==v)    continue;
            if(dis[u][v]==INT_MAX) return -1;
            ans+=dis[u][v];
        }
        return ans;
    }
};