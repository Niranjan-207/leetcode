// Last updated: 4/4/2026, 11:07:40 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> row(9,vector<bool> (9,false));
        vector<vector<bool>> col(9,vector<bool> (9,false));
        vector<vector<bool>> box(9,vector<bool> (9,false));
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int num=board[i][j]-'1';
                    int idx=(i/3)*3+(j/3);
                    if(row[i][num] || col[j][num] || box[idx][num]) return false;
                    row[i][num]=true;
                    col[j][num]=true;
                    box[idx][num]=true;
                }
                

            }
        }
        return true;
    }
};