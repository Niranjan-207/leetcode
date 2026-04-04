// Last updated: 4/4/2026, 10:59:38 PM
class Solution {
public:
    void maxValues(vector<vector<int>>& grid,vector<int>& ans,int row,int k){
        sort(grid[row].begin(), grid[row].end(), greater<int>()); 
        for (int i = 0; i < min(k, (int)grid[row].size()); i++) { 
            ans.push_back(grid[row][i]);
        }
    }

    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        vector<int> ans;
        for(int i=0;i<grid.size();i++){
            //for(int j=0;j<grid[i].size();j++){
                maxValues(grid,ans,i,limits[i]);
            //}
        }
        sort(ans.begin(),ans.end());
        long long sum=0;
        //     for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        // cout<<endl;
        int n=ans.size();
        for (int i = 0; i < min(k, (int)ans.size()); i++) { 
            sum += ans[n-1-i];
        }
        return sum;
    }
};