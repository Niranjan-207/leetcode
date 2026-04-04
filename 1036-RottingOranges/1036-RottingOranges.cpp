// Last updated: 4/4/2026, 11:03:09 PM
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        int fresh=0,time=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)   q.push({i,j});
                else if(grid[i][j]==1)  fresh++;
            }
        }

        vector<int> X={-1 , 0,1 ,0};
        vector<int> Y={0  , 1,0,-1};

        while(!q.empty() && fresh>0){

            int size=q.size();
            time++;

            while(size--){
                auto a=q.front();
                q.pop();

                for(int i=0;i<4;i++){
                    int nx=a.first+X[i];
                    int ny=a.second+Y[i];
                    if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==1){
                        grid[nx][ny]=2;
                        fresh--;
                        q.push({nx,ny});
                    }
                }
            }
        }
        //cout<<fresh<<endl;
        return (fresh==0?time:-1);
    }
};