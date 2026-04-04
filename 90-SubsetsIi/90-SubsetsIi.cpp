// Last updated: 4/4/2026, 11:07:00 PM
class Solution {
public:
    void solve(int idx,vector<int>& cur,vector<vector<int>>& ans,vector<int>& nums){
        
            ans.push_back(cur);
            

        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1])   continue;
            cur.push_back(nums[i]);
            solve(i+1,cur,ans,nums);
            cur.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<vector<int>> ans;
        vector<int> cur;

        solve(0,cur,ans,nums);
        return ans;
    }
};