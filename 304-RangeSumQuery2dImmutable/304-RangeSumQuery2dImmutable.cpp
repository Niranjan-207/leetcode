// Last updated: 4/4/2026, 11:05:16 PM
class NumMatrix {
public:
    vector<vector<int>> vec;
    NumMatrix(vector<vector<int>>& matrix): vec(matrix){
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0)    continue;
                else{
                    vec[i][j]+=vec[i][j-1];
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0)    continue;
                else{
                    vec[i][j]+=vec[i-1][j];
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans=vec[row2][col2];
        if(row1-1>=0) ans-=vec[row1-1][col2];
        if(col1-1>=0) ans-=vec[row2][col1-1];
        if(row1-1>=0 && col1-1>=0)  ans+=vec[row1-1][col1-1];   
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */