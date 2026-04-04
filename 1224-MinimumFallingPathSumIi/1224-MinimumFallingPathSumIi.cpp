// Last updated: 4/4/2026, 11:02:54 PM
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        int n=grid.size();
        vector<vector<int>> dp(n,vector<int> (n,1e9));
        for(int i=0;i<n;i++){
            dp[0][i]=grid[0][i];
        }

        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(j!=k){
                        dp[i][j]=min(dp[i][j],grid[i][j]+dp[i-1][k]);
                    }
                }   
            }
        }

        return *min_element(dp[n-1].begin(),dp[n-1].end());
    }
};