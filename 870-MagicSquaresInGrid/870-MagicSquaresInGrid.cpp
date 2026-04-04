// Last updated: 4/4/2026, 11:03:41 PM
class Solution {
public:
    bool check(vector<vector<int>>& grid,int x,int y){
        if(grid[x+1][y+1]!=5)   return false;
        int mask=0;
        for(int i=x;i<x+3;i++){
            for(int j=y;j<y+3;j++){
                int ele=grid[i][j];
                if(ele<1 || ele>9)    return false;
                if(mask&(1<<ele))   return false;
                mask|=(1<<ele);
            }
        }
        if(mask!=1022)  return false;

        for(int i=x;i<x+3;i++){
            int sum=0;
            for(int j=y;j<y+3;j++){
                sum+=grid[i][j];
            }
            if(sum!=15) return false;
        }

        for(int j=y;j<y+3;j++){
            int sum=0;
            for(int i=x;i<x+3;i++){
                sum+=grid[i][j];
            }
            if(sum!=15) return false;
        }

        if((grid[x][y]+grid[x+1][y+1]+grid[x+2][y+2])!=15 || 
        (grid[x][y+2]+grid[x+1][y+1]+grid[x+2][y])!=15)    return false;

        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        if(n<3 || m<3)  return 0;

        int cnt=0;
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                if(check(grid,i,j)) cnt++;
            }
        }
        return cnt;
    }
};