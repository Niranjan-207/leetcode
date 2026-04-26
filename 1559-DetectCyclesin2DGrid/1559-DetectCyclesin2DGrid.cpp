// Last updated: 4/26/2026, 8:39:23 PM
1class Solution {
2public:
3    vector<int> X={1,0,-1,0};
4    vector<int> Y={0,1,0,-1};
5
6    bool bfs(int x,int y,vector<vector<char>>& grid,vector<vector<bool>>& vis){
7        queue<tuple<int,int,int,int>> q;
8        q.push({x,y,-1,-1});
9        vis[x][y]=true;
10        int n=grid.size(),m=grid[0].size();
11        char c=grid[x][y];
12        while(!q.empty()){
13            auto [cx,cy,xp,yp]=q.front();
14            q.pop();
15
16            for(int i=0;i<4;i++){
17                int nx=cx+X[i];
18                int ny=cy+Y[i];
19
20                if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==c ){
21                    if(nx==xp && ny==yp)    continue;
22                    if(vis[nx][ny]) return true;
23                    vis[nx][ny]=true;
24                    q.push({nx,ny,cx,cy});
25                }
26                    
27                
28            }
29        }
30        return false;
31    }
32
33    bool containsCycle(vector<vector<char>>& grid) {
34        int n=grid.size();
35        int m=grid[0].size();
36        vector<vector<bool>> vis(n,vector<bool> (m,false));
37
38        for(int i=0;i<n;i++){
39            for(int j=0;j<m;j++){
40                if(vis[i][j]==false){
41                    if(bfs(i,j,grid,vis)){
42                        return true;
43                    }
44                }
45            }
46        }
47
48        return false;
49    }
50};