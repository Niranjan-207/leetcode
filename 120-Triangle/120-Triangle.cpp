// Last updated: 4/4/2026, 11:06:44 PM
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int> (n,INT_MAX));
        dp[0][0]=triangle[0][0];
        for(int i=1;i<n;i++){
            for(int j=0;j<triangle[i].size();j++){
                if(j==0){
                    dp[i][j]=dp[i-1][j]+triangle[i][j];
                }else{
                    dp[i][j]=min(dp[i-1][j],dp[i-1][j-1])+triangle[i][j];
                }
            }
        }
        return *min_element(dp[n-1].begin(),dp[n-1].end());
    }
};