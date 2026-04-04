// Last updated: 4/4/2026, 11:00:49 PM
class Solution {
public:
    vector<vector<int>> vis;
    int n,m;
    void LtoR(){
        for(int i=0;i<m;i++){
            bool seen=false;
            for(int j=0;j<n;j++){
                if(vis[i][j]==2)    seen=true;
                else if(vis[i][j]==-1)   seen=false;
                else if(seen)   vis[i][j]=1;
            }
        }
    }

    void RtoL(){
        for(int i=0;i<m;i++){
            bool seen=false;
            for(int j=n-1;j>=0;j--){
                if(vis[i][j]==2)    seen=true;
                else if(vis[i][j]==-1)   seen=false;
                else if(seen)   vis[i][j]=1;
            }
        }
    }


    void TtoB(){
        for(int j=0;j<n;j++){
            bool seen=false;
            for(int i=0;i<m;i++){
                if(vis[i][j]==2)    seen=true;
                else if(vis[i][j]==-1)   seen=false;
                else if(seen)   vis[i][j]=1;
            }
        }
    }

    void BtoT(){
        for(int j=0;j<n;j++){
            bool seen=false;
            for(int i=m-1;i>=0;i--){
                if(vis[i][j]==2)    seen=true;
                else if(vis[i][j]==-1)   seen=false;
                else if(seen)   vis[i][j]=1;
            }
        }
    }

    int countUnguarded(int M, int N, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        n=N;m=M;
        vis.assign(m,vector<int>(n,0));
        
        for(auto& wall:walls){
            vis[wall[0]][wall[1]]=-1;
        }

        for(auto guard:guards){
            int x=guard[0];
            int y=guard[1];
            vis[x][y]=2;
        }

        LtoR();
        RtoL();
        TtoB();
        BtoT();


        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==0)    cnt++;
            }
        }
        return cnt;
    }
};