// Last updated: 5/3/2026, 12:25:30 PM
1class Solution {
2public:
3    int f(string& s1,string& s2,int idx1,int idx2,vector<vector<int>>& dp){
4
5        if(idx1<0 || idx2<0)    return 0;
6        if(dp[idx1][idx2]!=-1)  return dp[idx1][idx2];
7        int match=0;
8        if(s1[idx1]==s2[idx2]){
9            match=1+f(s1,s2,idx1-1,idx2-1,dp);
10        }
11        int notMatch=max({f(s1,s2,idx1,idx2-1,dp),f(s1,s2,idx1-1,idx2,dp)});
12
13        return dp[idx1][idx2]=max(match,notMatch);
14    }
15
16    int longestCommonSubsequence(string s1, string s2) {
17        int n=s1.length(),m=s2.length();
18        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
19        //return f(text1,text2,n-1,m-1,dp);
20        for(int i=1;i<=n;i++){
21            for(int j=1;j<=m;j++){
22                if(s1[i-1]==s2[j-1]){
23                    dp[i][j]=1+dp[i-1][j-1];
24                }else{
25                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
26                }
27            }
28        }
29        return dp[n][m];
30    }
31};