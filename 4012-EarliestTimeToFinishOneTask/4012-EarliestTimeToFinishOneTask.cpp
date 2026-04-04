// Last updated: 4/4/2026, 10:59:05 PM
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=INT_MAX;
        for(int i=0;i<tasks.size();i++){
            int a=tasks[i][0];
            int b=tasks[i][1];
            ans=min(ans,(a+b));
            
        }
        return ans;
    }
};