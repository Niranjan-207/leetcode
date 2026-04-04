// Last updated: 4/4/2026, 11:07:37 PM
class Solution {
public:
    void solve(int idx,int sum,vector<int>& cur,vector<vector<int>>& ans,vector<int>& candidates, int target){

        if(sum==target){
            ans.push_back(cur);
        }

        for(int i=idx;i<candidates.size();i++){
            if((i>idx && candidates[i]==candidates[i-1]) ||sum+candidates[i]>target)    continue;
            cur.push_back(candidates[i]);
            solve(i+1,sum+candidates[i],cur,ans,candidates,target);
            cur.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> cur;
        solve(0,0,cur,ans,candidates,target);
        return ans;
    }
};