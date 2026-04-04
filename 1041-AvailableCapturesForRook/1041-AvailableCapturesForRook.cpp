// Last updated: 4/4/2026, 11:03:07 PM
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int x=-1,y;

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j]=='R'){
                    x=i;
                    y=j;break;
                }
            }
            if(x!=-1)   break;
        }

        int cnt=0;
        //right
        for(int i=x;i<8;i++){
            if(board[i][y]=='B')    break;
            if(board[i][y]=='p'){
                cnt++;
                break;
            }
        }

        //left
        for(int i=x;i>=0;i--){
            if(board[i][y]=='B')    break;
            if(board[i][y]=='p'){
                cnt++;
                break;
            }
        }

        //up
        for(int i=y;i>=0;i--){
            if(board[x][i]=='B')    break;
            if(board[x][i]=='p'){
                cnt++;
                break;
            }
        }

        //down
        for(int i=y;i<8;i++){
            if(board[x][i]=='B')    break;
            if(board[x][i]=='p'){
                cnt++;
                break;
            }
        }

        return cnt;
    }
};