// Last updated: 4/19/2026, 8:25:34 AM
1class Solution {
2public:
3    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
4        vector<vector<int>> arr(n,vector<int>(m,0));
5
6        sort(begin(sources),end(sources),[](const vector<int>& a,const vector<int>& b){
7            return a[2]>b[2]; 
8        });
9
10        queue<pair<int,int>> q;
11        for(vector<int>& source:sources){
12            int row=source[0],col=source[1],colr=source[2];
13            arr[row][col]=colr;
14            q.push({row,col});
15        }
16
17        vector<int> x={1 ,0 ,-1 ,0 };
18        vector<int> y={0 ,1 ,0  ,-1};
19
20        while(!q.empty()){
21            pair<int,int> cur=q.front();
22            q.pop();
23
24            auto& [r,c]=cur;
25            for(int i=0;i<4;i++){
26                int nr=r+x[i];
27                int nc=c+y[i];
28
29                if(nr>=0 && nr<n && nc>=0 && nc<m && arr[nr][nc]==0){
30                    arr[nr][nc]=arr[r][c];
31                    q.push({nr,nc});
32                }
33            }
34        }
35
36        return arr;
37    }
38    
39};