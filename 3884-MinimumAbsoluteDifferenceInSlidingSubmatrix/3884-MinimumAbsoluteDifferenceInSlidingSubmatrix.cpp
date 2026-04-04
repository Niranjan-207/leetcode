// Last updated: 4/4/2026, 10:59:23 PM
class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> ans(n-k+1,vector<int>(m-k+1,0));
        vector<int> temp(k*k);
        for(int i=0;i<=n-k;i++){
            for(int j=0;j<=m-k;j++){

                int idx=0;
                for(int r=i;r<i+k;r++){
                    for(int c=j;c<j+k;c++){
                        temp[idx++]=(grid[r][c]);
                    }
                }
                sort(begin(temp),end(temp));
                int val=INT_MAX;
                bool found=false;
                for(int i=1;i<(k*k);i++){
                    if(temp[i]!=temp[i-1]){
                        val=min(val,temp[i]-temp[i-1]);
                        found=true;
                    }
                }
                if(found)   ans[i][j]=val;
                else    ans[i][j]=0;
            }
        }
        return ans;
    }
};