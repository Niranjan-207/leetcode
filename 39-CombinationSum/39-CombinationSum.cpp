// Last updated: 4/4/2026, 11:07:38 PM
class Solution {
public:
    void solve(int idx,int sum,vector<int>& cur,vector<vector<int>>& ans,vector<int>& candidates, int target){
        if(sum==target){
            ans.push_back(cur);
            return;
        }

        for(int i=idx;i<candidates.size();i++){
            if(sum+candidates[i] > target) continue;
           
                cur.push_back(candidates[i]);
                solve(i,sum+candidates[i],cur,ans,candidates,target);
                cur.pop_back();
            
        }

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> cur;
        solve(0,0,cur,ans,candidates,target);
        return ans;
    }
};