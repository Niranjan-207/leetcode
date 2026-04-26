// Last updated: 4/27/2026, 12:48:32 AM
1class Solution {
2public:
3    bool canMakeArithmeticProgression(vector<int>& arr) {
4        int n=arr.size();
5        sort(begin(arr),end(arr));
6        int dif=arr[1]-arr[0];
7        for(int i=1;i<n;i++){
8            if(arr[i]-arr[i-1]!=dif)    return false;
9        }
10        return true;
11    }
12};