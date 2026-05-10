// Last updated: 5/10/2026, 9:21:17 AM
1
2class Solution {
3public:
4    #define ll long long
5    
6    vector<int> minCost(int n, vector<int>& prices, vector<vector<int>>& roads) {
7        vector<vector<pair<ll,ll>>> emptyGraph(n),taxGraph(n);
8
9        for(vector<int>& edge:roads){
10            ll u=edge[0],v=edge[1];
11            ll e=edge[2],t=edge[3];
12            emptyGraph[u].push_back({v,e});
13            emptyGraph[v].push_back({u,e});
14
15            taxGraph[u].push_back({v,1ll*e*t});
16            taxGraph[v].push_back({u,1ll*e*t});
17        }
18
19        vector<int> ans(n);
20        for(int node=0;node<n;node++){
21
22
23            vector<ll> emptyDis(n,LLONG_MAX);
24            vector<ll> taxDis(n,LLONG_MAX);
25
26            priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
27            
28            pq.push({0,node});
29            emptyDis[node]=0;
30            while(!pq.empty()){
31                auto [d,u]=pq.top();
32                pq.pop();
33                if(d!=emptyDis[u]) continue;
34                for(auto [v,w]:emptyGraph[u]){
35                    if(d+w<emptyDis[v]){
36                        emptyDis[v]=d+w;
37                        pq.push({emptyDis[v],v});
38                    }
39                }
40            }
41
42            pq.push({0,node});
43            taxDis[node]=0;
44            while(!pq.empty()){
45                auto [d,u]=pq.top();
46                pq.pop();
47                if(d!=taxDis[u]) continue;
48                for(auto [v,w]:taxGraph[u]){
49                    if(d+w<taxDis[v]){
50                        taxDis[v]=d+w;
51                        pq.push({taxDis[v],v});
52                    }
53                }
54            }
55
56            ll cur=prices[node];
57            for(int i=0;i<n;i++){
58                if(emptyDis[i]!=LLONG_MAX && taxDis[i]!=LLONG_MAX)
59                cur=min(cur,emptyDis[i]+taxDis[i]+(ll)prices[i]);
60            }
61            ans[node]=cur;
62        }
63        return ans;
64    }
65    
66};