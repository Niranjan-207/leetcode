// Last updated: 4/4/2026, 11:07:04 PM
class Solution {
public:
vector<int> X={0,1,0,-1};
vector<int> Y={-1,0,1,0};
    bool check(int i,int j,int idx,string& word,vector<vector<char>>& board ){
        if(idx==word.length()) return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[idx])
            return false;
        
        

        char c=board[i][j];
        board[i][j]='*';
        for(int k=0;k<4;k++){
            int nx=i+X[k],ny=j+Y[k];
           
            if(check(nx,ny,idx+1,word,board))  return true;
            
        }
        board[i][j]=c;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(check(i,j,0,word,board))    return true;
            }
        }
        return false;
    }
};