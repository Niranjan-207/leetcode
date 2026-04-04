// Last updated: 4/4/2026, 11:07:28 PM
class Solution {
public:
    bool pos(int row,int col,vector<string>& s,int n){
        for(int i=0;i<n;i++){
            if(s[row][i]=='Q')  return false;
        }

        for(int i=0;i<n;i++){
            if(s[i][col]=='Q')    return false;
        }

        int x=row,y=col;
        while(x>=0 && y>=0){
            if(s[x][y]=='Q')  return false;
            x--;y--;
        }

        x=row-1,y=col+1;
        while(x>=0 && y<n){
            if(s[x][y]=='Q')  return false;
            x--;y++;
        }
        return true;
    }

    void solve(int row,vector<string>& s,vector<vector<string>>& ans,int& n){
        
        if(row==n){
            ans.push_back(s);
            return;
        }

       
            for(int j=0;j<n;j++){
                if(pos(row,j,s,n)){
                    s[row][j]='Q';
                    solve(row+1,s,ans,n);
                    s[row][j]='.';
                }
            }
        
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> s(n, string(n, '.'));
        solve(0,s,ans,n);
        return ans;
    }
};