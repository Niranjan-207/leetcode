// Last updated: 5/9/2026, 12:17:45 PM
1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        vector<vector<int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
5
6        vector<int> ans;
7        int n=matrix.size();
8        int m=matrix[0].size();
9
10        int cdir=0;
11        int cr=0,cc=0;
12        while(ans.size()<(n*m)){
13            ans.push_back(matrix[cr][cc]);
14            matrix[cr][cc]=10000;
15            int nr=cr+dir[cdir][0];
16            int nc=cc+dir[cdir][1];
17            if(nr==n || nc==m || nc<0 || nr<0 || matrix[nr][nc]==10000)
18                cdir=(cdir+1)%4;
19
20            cr+=dir[cdir][0];
21            cc+=dir[cdir][1];
22        }
23        return ans;
24    }
25};