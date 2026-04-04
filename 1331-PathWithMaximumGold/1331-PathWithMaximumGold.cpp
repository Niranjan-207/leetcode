// Last updated: 4/4/2026, 11:02:43 PM
class Solution {
public:
    int dir[4][2]={{0,-1},{1,0},{0,1},{-1,0}};
    int search(vector<vector<int>>& grid,int x,int y){

        if(x<0 || x>=grid.size() || y<0 || y>=grid[0].size() || grid[x][y]==0)          return 0;

        int temp=grid[x][y];
        grid[x][y]=0;

        int pre=0;
        for(auto& it:dir){
            pre=max(pre,search(grid,x+it[0],y+it[1]));
        }

        grid[x][y]=temp;
        return pre+temp;
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int gold=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0)
                    gold=max(gold,search(grid,i,j));
            }
        }

        return gold;
    }
};