// Last updated: 5/13/2026, 10:25:26 PM
1class Solution {
2public:
3    int maximumPopulation(vector<vector<int>>& logs) {
4        vector<int> arr(101,0);
5        for(vector<int>& log:logs){
6            arr[log[0]-1950]+=1;
7            arr[log[1]-1950]-=1;
8        }
9        int ma=0;
10        for(int i=1;i<=100;i++){
11            arr[i]=arr[i-1]+arr[i];
12            if(arr[i]>arr[ma])   ma=i;
13        }
14        return (1950+ma);
15    }
16};