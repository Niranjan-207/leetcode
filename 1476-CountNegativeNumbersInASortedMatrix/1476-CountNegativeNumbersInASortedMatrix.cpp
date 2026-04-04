// Last updated: 4/4/2026, 11:02:22 PM
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        int n=grid.size();
        int m=grid[0].size();
        int i=n-1,j=0;
        while(i>=0 && j<(m)){
            if(grid[i][j]<0){    cnt+=(m-j);i--;}
            else{
                j++;
            }
        }
        return cnt;
    }
};