// Last updated: 5/3/2026, 3:14:36 PM
1class Solution {
2public:
3    int minInsertions(string s1) {
4        string s2=s1;
5        reverse(begin(s2),end(s2));
6
7        int n=s1.length();
8        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
9        int ans=0;
10        for(int i=1;i<=n;i++){
11            for(int j=1;j<=n;j++){
12                if(s1[i-1]==s2[j-1]){
13                    dp[i][j]=dp[i-1][j-1]+1;
14                    ans=max(ans,dp[i][j]);
15                }else{
16                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
17                }
18            }
19        }
20        return (n-ans);
21    }
22};