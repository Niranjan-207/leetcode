// Last updated: 4/4/2026, 10:59:21 PM
class Solution {
public:
    vector<int> dijkstra(int n,vector<vector<pair<int,int>>>& graph){
        vector<int> dis(n,INT_MAX);

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;   //dis,u
        dis[0]=0;
        pq.push({0,0});

        while(!pq.empty()){
            auto [wei,u]=pq.top();
            pq.pop();
            if(dis[u]<wei)  continue;
            for(auto [adjNode,weight]:graph[u]){
                if(wei+weight<dis[adjNode]){
                    dis[adjNode]=(wei+weight);
                    pq.push({dis[adjNode],adjNode});
                }
            }
        }
        return dis;
    }

    int minCost(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>> graph(n);
        for(const auto& e : edges){
            int u = e[0], v = e[1], w = e[2];
            graph[u].push_back({v,w});
            graph[v].push_back({u,2*w});
        }

        vector<int> dis=dijkstra(n,graph);

        return (dis[n-1]==INT_MAX?-1:dis[n-1]);
    }
};