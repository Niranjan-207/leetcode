// Last updated: 5/3/2026, 1:23:31 AM
1class Solution {
2public:
3    int f(int idx,int target,vector<int>& nums,vector<vector<int>>& dp,int& tot){
4        if(idx==0){
5            if(target==0 && nums[idx]==0)   return 2;
6            if(target==nums[0] || target==-nums[0]) return 1;
7            return 0;
8        }
9        if (target > tot || target < -tot) return 0;
10
11        if(dp[idx][target+tot]!=-1) return dp[idx][target+tot];
12
13        int m=f(idx-1,target-nums[idx],nums,dp,tot);
14        int p=f(idx-1,target+nums[idx],nums,dp,tot);
15
16        return dp[idx][target+tot]=m+p;
17    }
18
19    int findTargetSumWays(vector<int>& nums, int target) {
20        int tot=accumulate(begin(nums),end(nums),0);
21        int n=nums.size();
22        vector<vector<int>> dp(n,vector<int> (2*tot+1,-1));
23        return f(n-1,target,nums,dp,tot);
24    }
25};