// Last updated: 4/4/2026, 11:04:27 PM
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        // unordered_map<int,vector<int>> graph;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(isConnected[i][j]==1){
        //             graph[i].push_back(j);
        //             graph[j].push_back(i);
        //         }
        //     }
        // }
        int cnt=0;
        set<int> seen;
        for(int i=0;i<n;i++){
            if(seen.find(i)==seen.end()){
                cnt++;
                bfs(i,isConnected,seen);
            }
        }
        return cnt;
    }

    void bfs(int i,vector<vector<int>>& graph,set<int>& seen){
        queue<int> q;
        q.push(i);
        seen.insert(i);

        while(!q.empty()){
            //int n=q.size();
            int u=q.front();
            auto& edges=graph[u];
            q.pop();
            for(int i=0;i<graph.size();i++){
                if(graph[u][i]==1 && seen.find(i)==seen.end()){
                    seen.insert(i);
                    q.push(i);
                }
            }
        }
    }
};