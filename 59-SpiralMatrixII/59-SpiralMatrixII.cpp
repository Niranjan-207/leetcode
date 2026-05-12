// Last updated: 5/12/2026, 9:51:45 AM
1class Solution {
2public:
3    vector<vector<int>> generateMatrix(int n) {
4        vector<vector<int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
5        vector<vector<int>> ans(n,vector<int>(n,0));
6
7        int curDir=0;
8        int num=1;
9        int r=0,c=0;
10
11        while(num<=(n*n)){
12            ans[r][c]=num++;
13            
14            int nr=r+dir[curDir][0];
15            int nc=c+dir[curDir][1];
16            if(nr<0 || nr>=n || nc<0 || nc>=n ||ans[nr][nc]!=0){
17                curDir=(curDir+1)%4;
18            }
19            r=r+dir[curDir][0];
20            c=c+dir[curDir][1];
21        }
22        return ans;
23    }
24};