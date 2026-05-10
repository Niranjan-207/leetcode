// Last updated: 5/10/2026, 11:29:52 PM
1class Solution {
2public:
3int n;
4    int f(int idx,vector<int>& nums,int k,vector<int>& dp){
5        if(idx==n-1)  return 0;
6
7        if(dp[idx]!=-2) return dp[idx];
8
9
10        int ans=-1;
11        for(int j=idx+1;j<n;j++){
12            if(abs(nums[idx]-nums[j])<=k){
13                int temp=f(j,nums,k,dp);
14
15                if(temp!=-1)    ans=max(ans,temp+1);
16            }
17        }
18        return dp[idx]=ans;
19    }
20
21    int maximumJumps(vector<int>& nums, int target) {
22        n=nums.size();
23        vector<int> dp(n,-2);
24        return f(0,nums,target,dp);
25    }
26};