// Last updated: 4/4/2026, 10:57:48 PM
class Solution {
public:
    vector<int> getdis(int node,int n,vector<vector<int>> lis){
        vector<int> dis(n,-1);
        queue<int> q;
        q.push(node);
        dis[node]=0;

        while(!q.empty()){
            int cur=q.front();
            q.pop();
            
            for(int nei:lis[cur]){
                if(dis[nei]==-1){
                    dis[nei]=dis[cur]+1;
                    q.push(nei);
                }
            }
        }
        return dis;
    }
    
    bool triplet(long long a,long long b,long long c){
        return ((a*a)+(b*b)==(c*c));
    }
    
    int specialNodes(int n, vector<vector<int>>& edges, int x, int y, int z) {
        vector<vector<int>> lis(n);
        for(auto edge:edges){
            lis[edge[0]].push_back(edge[1]);
            lis[edge[1]].push_back(edge[0]);
        }

        vector<int> dx=getdis(x,n,lis);
        vector<int> dy=getdis(y,n,lis);
        vector<int> dz=getdis(z,n,lis);
        int cnt=0;
        for(int i=0;i<n;i++){
            vector<int> temp(3);
            temp[0]=dx[i];
            temp[1]=dy[i];
            temp[2]=dz[i];

            sort(begin(temp),end(temp));
            
            long long a=temp[0],b=temp[1],c=temp[2];
            if(triplet(a,b,c)) cnt++;
        }
        return cnt;
    }
};