// Last updated: 5/3/2026, 10:52:41 PM
1class Solution {
2public:
3    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
4        vector<vector<pair<int,int>>> graph(n);     //0 ->red  1->green
5        for(auto node:redEdges){
6            graph[node[0]].push_back({node[1],0});
7        }
8        for(auto node:blueEdges){
9            graph[node[0]].push_back({node[1],1});
10        }
11
12        vector<vector<bool>> vis(n,vector<bool>(2,false));
13        queue<pair<int,int>> q;
14        q.push({0,1});
15        q.push({0,0});
16
17        vis[0][0]=true;
18        vis[0][1]=true;
19        int steps=0;
20        vector<int> dis(n,-1);
21        while(!q.empty()){
22            int sz=q.size();
23
24            while(sz--){
25                auto [cur,col]=q.front();
26                q.pop();
27
28                if(dis[cur]==-1)    dis[cur]=steps;
29
30                for(auto& [child,ccol]:graph[cur]){
31                    if(vis[child][ccol] || col==ccol)   continue;
32
33                    vis[child][ccol]=true;
34                    q.push({child,ccol});
35                }
36
37            }
38            steps++;
39        }
40        return dis;
41    }
42};