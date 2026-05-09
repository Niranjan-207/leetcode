// Last updated: 5/9/2026, 2:34:31 PM
1class Solution {
2public:
3    bool f(int idx,vector<int>& nums,int k,vector<vector<int>>& dp){
4        if(k==0 )    return true;
5        if(idx==nums.size())    return false;
6
7        if(dp[idx][k]!=-1) return dp[idx][k];
8        bool notTake=f(idx+1,nums,k,dp);
9
10        bool take=false;
11        if(nums[idx]<=k)    take=f(idx+1,nums,k-nums[idx],dp);
12
13        return dp[idx][k]=(take||notTake);
14    }
15
16    bool canPartition(vector<int>& nums) {
17        int target=accumulate(begin(nums),end(nums),0);
18        if(target&1)    return false;
19
20        vector<vector<int>> dp(nums.size()+1,vector<int> (target+1,-1));
21        return f(0,nums,target/2,dp);
22    }
23};