// Last updated: 5/4/2026, 3:48:13 PM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int n=matrix.size();
5        for(int i=0;i<n;i++){
6            for(int j=i+1;j<n;j++){
7                swap(matrix[i][j],matrix[j][i]);
8            }
9        }
10        for(int i=0;i<n;i++){
11            for(int j=0;j<n/2;j++){
12                swap(matrix[i][j],matrix[i][n-j-1]);
13            }
14        }
15
16        
17    }
18};