// Last updated: 4/4/2026, 10:59:25 PM
class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long sum=0;
        int n=grid.size(),m=grid[0].size();

         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum+=grid[i][j];
            }
        }
        if(sum&1)   return false;
        long long row=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                row+=grid[i][j];
                if(j==m-1 && (2*row == sum))    return  true  ;
                
            }
        }
        long long col=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                col+=grid[j][i];
                if(j==n-1 && (2*col == sum))    return  true  ;
            }
        }

        
        return false;
    }
};