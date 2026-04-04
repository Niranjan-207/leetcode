// Last updated: 4/4/2026, 11:01:28 PM
class Solution {
public:
void rotate(vector<vector<int>>& mat){
    int n=mat.size(),m=mat[0].size();

    for(int i=0;i<m;i++){
        for(int j=0;j<n/2;j++){
            swap(mat[j][i],mat[n-j-1][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
}
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++){
            if(mat==target) return true;
            rotate(mat);
        }
       
        return false;
    }
};