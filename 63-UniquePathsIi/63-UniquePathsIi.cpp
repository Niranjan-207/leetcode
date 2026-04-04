// Last updated: 4/4/2026, 11:07:20 PM
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 || obstacleGrid[n-1][m-1]==1)  return 0;
        vector<vector<int>> dp(n,vector<int> (m,1));

        //row
        bool flag=false;
        for(int i=0;i<m;i++){
            if(obstacleGrid[0][i]==1){
                flag=true;
            }
            if(flag){
                dp[0][i]=0;
            }
        }

        //column
        flag=false;
        for(int i=0;i<n;i++){
            if(obstacleGrid[i][0]==1){
                flag=true;
            }
            if(flag){
                dp[i][0]=0;
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(obstacleGrid[i][j]==1)   dp[i][j]=0;
            }
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(dp[i][j]==0) continue;
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[n-1][m-1];
    }
};