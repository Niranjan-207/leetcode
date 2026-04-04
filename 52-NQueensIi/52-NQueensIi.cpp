// Last updated: 4/4/2026, 11:07:27 PM
class Solution {
public:
    vector<string> board;
    int cnt=0;

    bool isSafe(int row,int col){

        //check col
        int i=row;
        while(i>=0){
            if(board[i][col]=='Q')  return false;
            i--;
        }

        //left diagnol
        i=row;int j=col;
        while(i>=0 && j>=0){
            if(board[i][j]=='Q')    return false;
            i--;j--;
        }
        i=row;j=col;
        while(i>=0 && j<board.size()){
            if(board[i][j]=='Q')    return false;
            i--;j++;
        }
        return true;
    }

    void solve(int row,int n){
        if(row==n){
            cnt++;
            return;
        }

        for(int col=0;col<n;col++){
            if(isSafe(row,col)){
                board[row][col]='Q';
                solve(row+1,n);
                board[row][col]='.';
            }
        }
    }

    int totalNQueens(int n) {
        board=vector<string>(n,string(n,'.'));
        solve(0,n);
        return cnt;
    }
};