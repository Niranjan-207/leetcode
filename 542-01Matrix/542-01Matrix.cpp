// Last updated: 5/8/2026, 9:54:12 AM
1class Solution {
2public:
3    
4    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
5        int n=mat.size();
6        int m=mat[0].size();
7        for(int i=0;i<n;i++){
8            for(int j=0;j<m;j++){
9                if(mat[i][j]==1){
10                    mat[i][j]=1e9;
11                }
12            }
13        }
14        for(int i=0;i<n;i++){
15            for(int j=0;j<m;j++){
16                if(mat[i][j]==1e9){
17                    if(i>0)   mat[i][j]=min(mat[i][j],mat[i-1][j]+1);
18                    if(j>0)   mat[i][j]=min(mat[i][j],mat[i][j-1]+1);
19                    //if(i-1>0 && j-1>0)  mat[i][j]=min(mat[i][j],mat[i-1][j-1]+1);
20                }
21            }
22        }
23
24        for(int i=n-1;i>=0;i--){
25            for(int j=m-1;j>=0;j--){
26                if(mat[i][j]!=0){
27                    if(i<n-1)   mat[i][j]=min(mat[i][j],mat[i+1][j]+1);
28                    if(j<m-1)   mat[i][j]=min(mat[i][j],mat[i][j+1]+1);
29                    //if(i<n-1 && j<m-1)  mat[i][j]=min(mat[i][j],mat[i+1][j+1]+1);
30                }
31            }
32        }
33        return mat;
34    }
35};