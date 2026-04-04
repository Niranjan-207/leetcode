// Last updated: 4/4/2026, 11:02:45 PM
class Solution {
public:
    using p=pair<int,double>;
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<p>> graph(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0],v=edges[i][1];
            graph[u].push_back({v,succProb[i]});
            graph[v].push_back({u,succProb[i]});
        }

        vector<double> dis(n,0);
        priority_queue<pair<double,int>> pq;         // weight,adjNode
        pq.push({1.0,start_node});
        dis[start_node]=1.0;

        while(!pq.empty()){
            auto [w,u]=pq.top();
            pq.pop();

            for(auto& [adjNode,weight]:graph[u]){
                if(w*weight>dis[adjNode]){
                    dis[adjNode]=(w*weight);
                    pq.push({(w*weight),adjNode});
                }
            }
        }
        return dis[end_node];

    }
};