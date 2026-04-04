// Last updated: 4/4/2026, 11:07:05 PM
class Solution {
public:

    void solve(int idx,vector<int>& cur,vector<int>& nums,vector<vector<int>>& ans){
        if(idx==nums.size()){
            ans.push_back(cur);
            return;
        }

        cur.push_back(nums[idx]);
        solve(idx+1,cur,nums,ans);
        cur.pop_back();

        solve(idx+1,cur,nums,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,temp,nums,ans);

        return ans;
    }
};