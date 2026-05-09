// Last updated: 5/9/2026, 10:41:20 AM
1class Solution {
2public:
3    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
4        
5        int rowStart=0,rowEnd=grid.size()-1;
6        int colStart=0,colEnd=grid[0].size()-1;
7
8        while(rowStart<rowEnd && colStart<colEnd){
9            vector<int> arr;
10            for(int i=colStart;i<=colEnd;i++){
11                arr.push_back(grid[rowStart][i]);
12            }
13
14            for(int i=rowStart+1;i<=rowEnd;i++){
15                arr.push_back(grid[i][colEnd]);
16            }
17
18            for(int i=colEnd-1;i>=colStart;i--){
19                arr.push_back(grid[rowEnd][i]);
20            }
21
22            for(int i=rowEnd-1;i>=rowStart+1;i--){
23                arr.push_back(grid[i][colStart]);
24            }
25            int nk=k%(arr.size());
26            rotate(arr.begin(),arr.begin()+nk,arr.end());
27            int idx=0;
28            
29            for(int i=colStart;i<=colEnd;i++){
30                grid[rowStart][i]=arr[idx++];
31            }
32
33            for(int i=rowStart+1;i<=rowEnd;i++){
34                grid[i][colEnd]=arr[idx++];
35            }
36
37            for(int i=colEnd-1;i>=colStart;i--){
38                grid[rowEnd][i]=arr[idx++];
39            }
40
41            for(int i=rowEnd-1;i>=rowStart+1;i--){
42                grid[i][colStart]=arr[idx++];
43            }
44
45
46            rowStart++;
47            rowEnd--;
48            colStart++;
49            colEnd--;
50        }
51        return grid;
52    }
53};