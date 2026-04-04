// Last updated: 4/4/2026, 11:01:34 PM
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size(); 
        int a=edges[0][0],b=edges[0][1];
        int c=edges[n-1][0],d=edges[n-1][1];
        if(a==c || a==d)    return a;
        return b;
    }
};