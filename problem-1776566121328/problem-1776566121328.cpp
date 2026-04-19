// Last updated: 4/19/2026, 8:05:21 AM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int cnt=0;
5        int n=nums.size();
6        int ma=INT_MIN;
7        for(int i=0;i<n;i++){
8            ma=max(ma,nums[i]);
9            int mi=INT_MAX;
10            for(int j=i;j<n;j++){
11                mi=min(mi,nums[j]);
12            }
13
14            if(ma-mi <=k) return i;
15        }
16        return -1;
17    }
18};