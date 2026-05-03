// Last updated: 5/3/2026, 11:24:03 PM
1class Solution {
2public:
3    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
4        unordered_set<int> se(begin(forbidden),end(forbidden));
5        vector<vector<bool>> vis(6000,vector<bool>(2,false));
6        queue<pair<int,int>> q;
7        q.push({0,0});
8        vis[0][0]=true;
9        vis[0][1]=true;
10        
11        //0 ->last forward now can go backward
12        //1 ->last backward now can go forward
13        int steps=0;
14        while(!q.empty()){
15            int sz=q.size();
16            while(sz--){
17                auto [cur,jump]=q.front();
18                q.pop();
19
20                if(cur==x)  return steps;
21
22                int forward=cur+a;
23                if(forward<6000 && !vis[forward][0] && se.find(forward)==se.end()){
24                    vis[forward][0]=true;
25                    q.push({forward,0});
26                }
27
28                int backward=cur-b;
29                if(jump==0 && backward>=0 && !vis[backward][1] && se.find(backward)==se.end()){
30                    vis[backward][1]=true;
31                    q.push({backward,1});
32                }
33
34            }
35            steps++;
36        }
37        return -1;
38    }   
39};