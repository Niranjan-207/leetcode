// Last updated: 5/7/2026, 1:42:41 PM
1class Solution {
2public:
3
4    int colorGrid(int x,int y,queue<pair<int,int>>& q,vector<vector<int>>& grid){
5        queue<pair<int,int>> tq;
6        tq.push({x,y});
7        vector<int> X={1,0,-1,0};
8        vector<int> Y={0,1,0,-1};
9        q.push({x,y});
10        grid[x][y]=-1;
11        int n=grid.size();
12
13        while(!q.empty()){
14            int qn=q.size();
15            for(int i=0;i<qn;i++){
16                auto [x,y]=q.front();
17                q.pop();
18
19                for(int i=0;i<4;i++){
20                    int nx=x+X[i];
21                    int ny=y+Y[i];
22
23                    if(nx>=0 && nx<n && ny>=0 && ny<n && grid[nx][ny]!=0 && grid[nx][ny]!=-1){
24                        tq.push({nx,ny});
25                        q.push({nx,ny});
26                        grid[nx][ny]=-1;
27                    }
28                }
29            }
30        }
31        
32        int cnt=0;
33        while(!tq.empty()){
34            int tqn=tq.size();
35            
36            for(int i=0;i<tqn;i++){
37                auto [x,y]=tq.front();
38                tq.pop();
39
40                for(int i=0;i<4;i++){
41                    int nx=x+X[i];
42                    int ny=y+Y[i];
43
44                    if(nx>=0 && nx<n && ny>=0 && ny<n  && grid[nx][ny]!=-1){
45                        if(grid[nx][ny]==1) return cnt;
46                        tq.push({nx,ny});
47                        grid[nx][ny]=-1;
48                    }
49                }
50            }
51            cnt++;
52        }
53
54        return -1;
55    }
56
57    int shortestBridge(vector<vector<int>>& grid) {
58        int n=grid.size();
59        queue<pair<int,int>> q;
60        for(int i=0;i<n;i++){
61            for(int j=0;j<n;j++){
62                if(grid[i][j]==1) return colorGrid(i,j,q,grid);
63            }
64        }
65        return -1;
66    }
67};