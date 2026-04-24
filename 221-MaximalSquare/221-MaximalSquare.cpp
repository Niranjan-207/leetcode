// Last updated: 4/24/2026, 10:25:59 PM
1class Solution {
2public:
3    int maximalSquare(vector<vector<char>>& matrix) {
4        int n=matrix.size(),m=matrix[0].size();
5
6        vector<vector<int>> dp(n,vector<int> (m,0));
7
8        int ans=0;
9        for(int i=0;i<n;i++){
10            for(int j=0;j<m;j++){
11                if(i==0 || j==0 || matrix[i][j]=='0'){
12                    dp[i][j]=matrix[i][j]-'0';
13                }else{
14                    dp[i][j]=min({dp[i-1][j-1],dp[i][j-1],dp[i-1][j]})+1;
15                }
16                ans=max(ans,dp[i][j]);
17            }
18        }
19        return ans*ans;
20    }
21};