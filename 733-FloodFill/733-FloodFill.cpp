// Last updated: 4/4/2026, 11:04:06 PM
class Solution {
public:
    vector<int> X={1,0,-1,0};
    vector<int> Y={0,1,0,-1};
    void solve(int i,int j,int& temp,vector<vector<int>>& image,int& color){
        if(i<0 || i==image.size() || j<0 || j==image[0].size() || image[i][j]!=temp)  return;
        image[i][j]=color;
        for(int k=0;k<4;k++){
            solve(i+X[k],j+Y[k],temp,image,color);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int temp=image[sr][sc];
        if(image[sr][sc]==color)    return image;
        solve(sr,sc,temp,image,color);
        return image;
    }
};