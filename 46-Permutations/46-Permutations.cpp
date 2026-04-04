// Last updated: 4/4/2026, 11:07:33 PM
class Solution {
public:
    void solve(int idx,vector<int>& cur,vector<bool>& visited,vector<int>& nums,vector<vector<int>>& ans){
        if(idx==nums.size()){
            ans.push_back(cur);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(visited[i]==false){
                visited[i]=true;
                cur.push_back(nums[i]);
                solve(idx+1,cur,visited,nums,ans);
                cur.pop_back();
                visited[i]=false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> visited(nums.size(),false);
        vector<vector<int>> ans;
        vector<int> cur;
        solve(0,cur,visited,nums,ans);
        return ans;
    }
};