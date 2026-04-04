// Last updated: 4/4/2026, 11:04:00 PM
class Solution {
public:
    vector<int> dijkstra(int n,const vector<vector<pair<int,int>>>& network,int src){
        vector<int> time(n,INT_MAX);
        priority_queue<pair<long long,int>, vector<pair<long long,int>>,greater<>> pq;

        time[src]=0;
        pq.push({0,src});

        while(!pq.empty()){
            auto [d,u]=pq.top();
            pq.pop();
            if(d>time[u])   continue;

            for(auto [v,dis]:network[u]){
                if((d+dis)<time[v]){
                    time[v]=(d+dis);
                    pq.push({time[v],v});
                }
            }
        }
        return time;
    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> network(n);
        for(auto edge:times){
            network[edge[0]-1].push_back({edge[1]-1,edge[2]});
        }

        vector<int> time=dijkstra(n,network,k-1);
        int ans=*max_element(begin(time),end(time));
        
        if(ans==INT_MAX)  return -1;
        return ans;
    }
};