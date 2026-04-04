// Last updated: 4/4/2026, 11:05:59 PM
class Solution {
public:
    void dfs(int i,int j,vector<vector<bool>>& visited,vector<vector<char>>& grid){
        if( i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]=='0' || visited[i][j]) return;

        visited[i][j]=true;

        dfs(i-1,j,visited,grid);
        dfs(i,j+1,visited,grid);
        dfs(i+1,j,visited,grid);
        dfs(i,j-1,visited,grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int cnt=0;
        vector<vector<bool>> visited(n,vector<bool> (m,false));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j])   continue;
                if(grid[i][j]=='1'){
                    dfs(i,j,visited,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};