// Last updated: 5/9/2026, 2:08:31 PM
1class Solution {
2public:
3    bool canPartition(vector<int>& nums) {
4        int sum=accumulate(begin(nums),end(nums),0);
5        if(sum&1)   return false;
6        bitset<100000> dp;
7        dp[0]=1;
8        for(int num:nums){
9            dp=dp|(dp<<num);
10            if(dp[sum/2])   return true;
11        }
12        return false;
13    }
14};