// Last updated: 4/4/2026, 10:59:53 PM
class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> pre(n,vector<int> (m,0));
        vector<vector<int>> cntX(n,vector<int> (m,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='X'){ pre[i][j]=1;cntX[i][j]=1;}
                else if(grid[i][j]=='Y')    pre[i][j]=-1;

            }
        }

        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                pre[i][j]+=pre[i][j-1];
                cntX[i][j]+=cntX[i][j-1];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                pre[j][i]+=pre[j-1][i];
                cntX[j][i]+=cntX[j-1][i];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(cntX[i][j]>0 && pre[i][j]==0)    cnt++;;
            }
        }
        return cnt;
    }
};