// Last updated: 4/27/2026, 10:39:34 PM
1class Solution {
2public:
3
4    vector<vector<pair<int,int>>> dir = {
5    {},
6    {{0,-1},{0,1}},
7    {{-1,0},{1,0}},
8    {{0,-1},{1,0}},
9    {{0,1},{1,0}},
10    {{0,-1},{-1,0}},
11    {{0,1},{-1,0}}
12};
13
14
15    bool hasValidPath(vector<vector<int>>& grid) {
16        int n=grid.size(),m=grid[0].size();
17
18        vector<vector<bool>> vis(n,vector<bool>(m,false));
19        queue<pair<int,int>> q;
20
21        q.push({0,0});
22        vis[0][0]=true;
23
24        while(!q.empty()){
25            auto [x,y]=q.front();
26            q.pop();
27
28            
29            if(x==n-1 && y==m-1)    return true;
30
31            for(auto& [dx,dy]:dir[grid[x][y]]){
32                int nx=x+dx,ny=y+dy;
33                if(nx>=n || nx<0 || ny>=m || ny<0 || vis[nx][ny]) continue;
34                for(auto& [bx,by]:dir[grid[nx][ny]]){
35                    if(nx+bx==x && ny+by==y){
36                        vis[nx][ny]=true;
37                        q.push({nx,ny});
38                        break;
39                    }
40                }
41            }
42        }
43        return false;
44
45    }
46};