// Last updated: 4/4/2026, 11:03:22 PM
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int> (n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0){
                    dp[0][j]=matrix[0][j];
                }else{
                    int u,lu=INT_MAX,ru=INT_MAX;
                    u=dp[i-1][j];
                    if(j-1 >=0) lu=dp[i-1][j-1];
                    if(j+1 < n) ru=dp[i-1][j+1];

                    dp[i][j]=matrix[i][j]+min({u,lu,ru});
                }
            }
        }
        return *min_element(dp[n-1].begin(),dp[n-1].end());
    }
};