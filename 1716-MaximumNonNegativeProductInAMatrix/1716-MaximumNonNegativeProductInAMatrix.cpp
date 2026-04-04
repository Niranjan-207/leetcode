// Last updated: 4/4/2026, 11:01:51 PM
class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int mod=1e9+7;
        vector<vector<long long>> minDp(n,vector<long long> (m,0));
        vector<vector<long long>> maxDp(n,vector<long long> (m,0));
        minDp[0][0]=maxDp[0][0]=grid[0][0];

        for(long long j=1;j<m;j++){
            maxDp[0][j]=minDp[0][j]=minDp[0][j-1]*grid[0][j];//1 col
        }
        for(long long i=1;i<n;i++){
            maxDp[i][0]=minDp[i][0]=minDp[i-1][0]*grid[i][0];//1 row
        }

        for(long long i=1;i<n;i++){
            for(long long j=1;j<m;j++){
                long long mit=minDp[i][j-1]*grid[i][j];
                long long mat=maxDp[i][j-1]*grid[i][j];
                long long mil=minDp[i-1][j]*grid[i][j];
                long long mal=maxDp[i-1][j]*grid[i][j];

                minDp[i][j]=min({mit,mat,mil,mal});
                maxDp[i][j]=max({mit,mat,mil,mal});
            }
        }
        long long ans= (maxDp[n-1][m-1]);
        if(ans<0)   return -1;
        
        return (int)(ans%mod);
    }
};