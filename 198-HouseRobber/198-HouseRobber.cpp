// Last updated: 4/22/2026, 11:57:54 PM
1class Solution {
2public:
3    int rob(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> dp(n);
6        dp[0]=nums[0];
7        for(int i=1;i<n;i++){
8            int take=nums[i];
9            if(i-2 >= 0) take+=dp[i-2];
10
11            int dont=dp[i-1];
12
13            dp[i]=max(take,dont);
14        }
15        return dp[n-1];
16    }
17};