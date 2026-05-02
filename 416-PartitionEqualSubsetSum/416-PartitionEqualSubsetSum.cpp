// Last updated: 5/2/2026, 2:11:39 PM
1class Solution {
2public:
3    bool f(int idx,vector<int>& nums,double sum,vector<vector<int>>& dp){
4        if(sum==0)  return true;
5        if(idx==0 && nums[0]==sum)  return true;
6        if(idx<=0)  return false;
7
8        if(dp[idx][sum]!=-1)    return dp[idx][sum];
9
10        bool notTake=f(idx-1,nums,sum,dp);
11
12        bool take=false;
13        if(nums[idx]<=sum)  take=f(idx-1,nums,sum-nums[idx],dp);
14
15        return dp[idx][sum]=(take || notTake);         
16    }
17
18    bool canPartition(vector<int>& nums) {
19        double target=accumulate(begin(nums),end(nums),0)/2.0;
20        int n=nums.size();
21        vector<vector<int>> dp(n,vector<int>(target+1,-1));
22        return f(n-1,nums,target,dp);//idx nums target dp
23    }
24};