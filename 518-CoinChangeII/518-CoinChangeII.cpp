// Last updated: 5/2/2026, 11:51:49 PM
1class Solution {
2public:
3
4    int f(int idx,int amount,vector<int>& coins,vector<vector<int>>& dp){
5        if(idx==0)  return amount%coins[0]==0;
6        
7
8        if(dp[idx][amount]!=-1) return dp[idx][amount];
9        int notTake=f(idx-1,amount,coins,dp);
10        int take=0;
11        if(coins[idx]<=amount){
12            take=f(idx,amount-coins[idx],coins,dp);
13        }
14
15        return dp[idx][amount]=(notTake+take);
16    }
17
18    int change(int amount, vector<int>& coins) {
19        int n=coins.size();
20
21        vector<vector<int>> dp(n,vector<int> (amount+1,-1));
22
23        return f(n-1,amount,coins,dp);
24    }
25};