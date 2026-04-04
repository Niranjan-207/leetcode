// Last updated: 4/4/2026, 11:00:14 PM
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]!=mat[i][(j+k)%m])  return false;
            }
        }
        return true;
    }
};