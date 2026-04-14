// Last updated: 4/14/2026, 11:51:19 PM
1class Solution {
2public:
3    int solve(vector<int> nums){
4        int n=nums.size();
5        vector<int> dp(n);
6        dp[0]=nums[0];
7        for(int i=1;i<n;i++){
8            int take=nums[i];
9            if(i>1) take+=dp[i-2];
10
11            int notTake=dp[i-1];
12            dp[i]=max(take,notTake);
13        }
14        return dp[n-1];
15
16    }
17
18    int rob(vector<int>& nums) {
19        return solve(nums);
20    }
21};