// Last updated: 4/4/2026, 11:01:15 PM
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size()!=(m*n))  return {};
        vector<vector<int>> ans(m,vector<int> (n));
        int p=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=original[p++];
            }
        }
        return ans;
    }
};