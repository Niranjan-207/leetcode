// Last updated: 5/9/2026, 12:07:43 PM
1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4        int rowStart=0,rowEnd=matrix.size()-1;
5        int colStart=0,colEnd=matrix[0].size()-1;
6
7        vector<int> ans;
8        while(rowStart<rowEnd && colStart<colEnd){
9            for(int i=colStart;i<=colEnd;i++){
10                ans.push_back(matrix[rowStart][i]);
11            }
12            rowStart++;
13            for(int i=rowStart;i<=rowEnd;i++){
14                ans.push_back(matrix[i][colEnd]);
15            }
16            colEnd--;
17            for(int i=colEnd;i>=colStart;i--){
18                ans.push_back(matrix[rowEnd][i]);
19            }
20            rowEnd--;
21            for(int i=rowEnd;i>=rowStart;i--){
22                ans.push_back(matrix[i][colStart]);
23            }
24            colStart++;
25        }
26        if(rowStart==rowEnd){
27            for(int i=colStart;i<=colEnd;i++){
28                ans.push_back(matrix[rowEnd][i]);
29            }
30        }else if(colEnd==colStart){
31            for(int i=rowStart;i<=rowEnd;i++){
32                ans.push_back(matrix[i][colEnd]);
33            }
34        }
35        return ans;
36    }
37};