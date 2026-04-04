// Last updated: 4/4/2026, 10:57:23 PM
class Solution {
public:
    int bfs(int x,unordered_map<int,vector<int>>& xy,unordered_map<int,vector<int>>& yx,
            set<int>& xv,set<int>& yv){
        int cnt=0;
        queue<pair<int,int>> q;
        q.push({x,0});
        xv.insert(x);
        while(!q.empty()){
            auto [val,pt]=q.front();
            q.pop();

            if(pt==0){
                for(int p:xy[val]){
                    cnt++;
                    if(yv.find(p)==yv.end()){
                        yv.insert(p);
                        q.push({p,1});
                    }
                }
            }else{
                for(int p:yx[val]){
                    if(xv.find(p)==xv.end()){
                        xv.insert(p);
                        q.push({p,0});
                    }
                }
            }
            
        }
        return cnt;
    }
    
    int maxActivated(vector<vector<int>>& points) {
        unordered_map<int,vector<int>> xy,yx;
        for(auto& point:points){
            xy[point[0]].push_back(point[1]);
            yx[point[1]].push_back(point[0]);
        }
        set<int> xv,yv;
        vector<int> cmp;

        for(auto& p:points){
            if(xv.find(p[0])==xv.end()){
                int cnt=bfs(p[0],xy,yx,xv,yv);
                cmp.push_back(cnt);
            }
        }
        sort(rbegin(cmp),rend(cmp));
        if(cmp.size()==1){
            return cmp[0]+1;
        }
        return cmp[0]+cmp[1]+1;
    }
};