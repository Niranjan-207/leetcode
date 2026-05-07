// Last updated: 5/7/2026, 12:00:00 PM
1class Solution {
2public:
3    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
4        int n=maze.size();
5        int m=maze[0].size();
6        vector<vector<bool>> vis(n,vector<bool>(m,false));
7        vector<int> X={1,0,-1,0};
8        vector<int> Y={0,1,0,-1};
9
10        int cnt=0;
11        queue<pair<int,int>> q;
12        int ex=entrance[0],ey=entrance[1];
13        vis[ex][ey]=true;
14        q.push({ex,ey});
15
16        while(!q.empty()){
17            int qn=q.size();
18            cnt++;
19            for(int i=0;i<qn;i++){
20                cout<<cnt<<" ";
21                auto [x,y]=q.front();
22                q.pop();
23
24                if((x==0 || x==n-1 || y==0 || y==m-1) && (x!=ex || y!=ey) )    return cnt-1;
25
26                for(int i=0;i<4;i++){
27                    int nx=x+X[i];
28                    int ny=y+Y[i];
29
30                    if(nx<n && nx>=0 && ny<m && ny>=0 && !vis[nx][ny] && maze[nx][ny]=='.'){
31                        q.push({nx,ny});
32                        vis[nx][ny]=true;
33                    }
34                }
35            }
36            
37        }
38        return -1;
39    }
40};