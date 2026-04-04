// Last updated: 4/4/2026, 11:01:30 PM
class Solution {
public:
    void solve(vector<int>& nums,int idx,int temp,int& ans){
        if(idx==nums.size()){
            ans+=temp;
            return;
        }
        solve(nums,idx+1,temp^nums[idx],ans);
        solve(nums,idx+1,temp,ans);
    }

    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        solve(nums,0,0,ans);
        return ans;
    }
};