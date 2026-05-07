// Last updated: 5/7/2026, 2:23:24 PM
1class Solution {
2public:
3    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
4        int n=grid.size();
5        if(n==1 && grid[0][0]==1)    return -1;
6        if(n==1 && grid[0][0]==0)    return 1;
7        if(grid[0][0]==1 || grid[n-1][n-1]==1)  return -1;
8        vector<int> X={1,1,0,-1,-1,-1,0,1};
9
10        vector<int> Y={0,1,1,1,0,-1,-1,-1};
11        queue<pair<int,int>> q;
12        q.push({0,0});
13        grid[0][0]=-1;
14        int cnt=1;
15        while(!q.empty()){
16            int qn=q.size();
17            cnt++;
18            for(int i=0;i<qn;i++){
19                auto [x,y]=q.front();
20                q.pop();
21
22                for(int i=0;i<8;i++){
23                    int nx=x+X[i];
24                    int ny=y+Y[i];
25
26                    if(nx>=0 && nx<n && ny>=0 && ny<n && grid[nx][ny]!=-1 && grid[nx][ny]!=1){
27                        if(nx==n-1 && ny==n-1)  return cnt;
28                        q.push({nx,ny});
29                        grid[nx][ny]=-1;
30                    }
31                }
32            }
33            
34        }
35        return -1;
36    }
37};