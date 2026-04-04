// Last updated: 4/4/2026, 11:03:08 PM
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indegree(n,0),outdegree(n,0);
        for(auto &a:trust){
            outdegree[a[0]-1]++;
            indegree[a[1]-1]++;
        }
        for(int i=1;i<=n;i++){
            if(outdegree[i-1]==0 && indegree[i-1]==(n-1))   return i;
        }
        return -1;
    }
};