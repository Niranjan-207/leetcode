// Last updated: 4/4/2026, 11:04:12 PM
class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>& grid){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0)   return 0;

        grid[i][j]=0;
        return (1+
                dfs(i-1,j,grid)
                +dfs(i,j+1,grid)
                +dfs(i+1,j,grid)
                +dfs(i,j-1,grid));
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();

        int ans=0;
        //vector<vector<bool>> visited(n,vector<bool> (m,false));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //if(visited[i][j])   continue;
                if(grid[i][j]==1){
                    int area=dfs(i,j,grid);
                    ans=max(ans,area);
                }
            }
        }
        return ans;
    }
};