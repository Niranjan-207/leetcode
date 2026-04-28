// Last updated: 4/28/2026, 10:45:38 PM
1class Solution {
2public:
3    int minOperations(vector<vector<int>>& grid, int x) {
4        int n=grid.size();
5        int m=grid[0].size();
6        vector<int> arr;
7        for(int i=0;i<n;i++){
8            for(int j=0;j<m;j++){
9                arr.push_back(grid[i][j]);
10            }
11        }
12
13        int mod=arr[0]%x;
14        for(int num:arr){
15            if(num%x!=mod)  return -1;
16        }
17        int l=arr.size();
18        sort(begin(arr),end(arr));
19        int med=arr[l/2];
20        int cnt=0;
21        for(int i=0;i<l;i++){
22            cnt+=((abs(arr[i]-med))/x);
23        }
24        return cnt;
25    }
26};