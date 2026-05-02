// Last updated: 5/3/2026, 12:04:24 AM
1class Solution {
2public:
3    int f(int idx,int amount,vector<int>& coins,vector<vector<int>>& dp){
4        if(idx==0){
5            if(amount%coins[0]==0) return amount/coins[0];
6            return 1e9;
7        }
8
9        if(dp[idx][amount]!=-1) return dp[idx][amount];
10
11        int notTake=f(idx-1,amount,coins,dp);
12
13        int take=1e9;
14        if(coins[idx]<=amount){
15            take=1+f(idx,amount-coins[idx],coins,dp);
16        }
17        return dp[idx][amount]=min(take,notTake);
18    }
19
20    int coinChange(vector<int>& coins, int amount) {
21        int n=coins.size();
22        vector<vector<int>> dp(n,vector<int> (amount+1,-1));
23        int ans=f(n-1,amount,coins,dp);
24        return ans>=1e9?-1:ans;
25    }
26};