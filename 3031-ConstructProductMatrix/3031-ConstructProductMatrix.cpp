// Last updated: 4/4/2026, 11:00:17 PM
class Solution {
public:

    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int mod=12345;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans(n,vector<int> (m,1));
        long long prev=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=prev;
                prev=(1ll*prev*grid[i][j])%mod;
            }
        }
        prev=1;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                ans[i][j]=(1ll*ans[i][j]*prev)%mod;
                prev=(1ll*prev*grid[i][j])%mod;
            }
        }
        return ans;
    }
};