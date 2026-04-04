// Last updated: 4/4/2026, 10:59:14 PM
class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for(int col=y;col<(y+k);col++){
            int top=x;
            int bot=x+k-1;
            while(top<bot){
                swap(grid[top][col],grid[bot][col]);
                top++;
                bot--;
            }
        }
        return grid;
    }
};