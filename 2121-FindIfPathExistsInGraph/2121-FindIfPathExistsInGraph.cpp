// Last updated: 4/4/2026, 11:01:17 PM
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> graph;
        for(auto edge: edges){
            int u=edge[0],v=edge[1];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        set<int> seen;
        return dfs(source,destination,graph,seen);
    }

    bool dfs(int node,int d,unordered_map<int,vector<int>>& graph,set<int>& seen){
        if(node==d) return true;

        seen.insert(node);
        for(int nei:graph[node]){
            if(seen.find(nei)==seen.end()){
                if(dfs(nei,d,graph,seen)) return true;
            }
        }
        return false;
    }
};