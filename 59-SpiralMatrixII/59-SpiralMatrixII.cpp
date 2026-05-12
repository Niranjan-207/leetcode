// Last updated: 5/12/2026, 9:52:35 AM
1class Solution {
2public:
3    vector<vector<int>> generateMatrix(int n) {
4        //vector<vector<int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
5        vector<int> dir={0,1,0,-1,0};
6        vector<vector<int>> ans(n,vector<int>(n,0));
7
8        int curDir=0;
9        int num=1;
10        int r=0,c=0;
11
12        while(num<=(n*n)){
13            ans[r][c]=num++;
14            
15            int nr=r+dir[curDir];
16            int nc=c+dir[curDir+1];
17            if(nr<0 || nr>=n || nc<0 || nc>=n ||ans[nr][nc]!=0){
18                curDir=(curDir+1)%4;
19            }
20            r=r+dir[curDir];
21            c=c+dir[curDir+1];
22        }
23        return ans;
24    }
25};