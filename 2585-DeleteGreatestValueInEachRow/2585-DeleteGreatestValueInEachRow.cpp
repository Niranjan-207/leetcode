// Last updated: 4/4/2026, 11:00:33 PM
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int ans=0;
        for(int i=0;i<m;i++){
            int ele=0;
            for(int j=0;j<n;j++){
                ele=max(ele,grid[j][i]);
            }
            ans+=ele;
        }
        return ans;
    }
};