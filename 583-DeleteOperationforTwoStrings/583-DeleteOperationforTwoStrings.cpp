// Last updated: 6/30/2026, 3:46:53 PM
1class Solution {
2public:
3    int solve(string& s1,string& s2,int idx1,int idx2, vector<vector<int>>& dp){
4        if(idx1>=s1.length() || idx2>=s2.length())  return 0;
5        if(dp[idx1][idx2]!=-1)  return dp[idx1][idx2];
6
7        if(s1[idx1]==s2[idx2]){
8            return dp[idx1][idx2]=1+solve(s1,s2,idx1+1,idx2+1,dp);
9        }
10        return dp[idx1][idx2]=max(solve(s1,s2,idx1+1,idx2,dp),solve(s1,s2,idx1,idx2+1,dp));
11    }
12
13    int minDistance(string word1, string word2) {
14        int n=word1.length(),m=word2.length();
15        vector<vector<int>> dp(n,vector<int>(m,-1));
16        int st=solve(word1,word2,0,0,dp);
17
18        return (n+m-(2*st));
19    }
20};