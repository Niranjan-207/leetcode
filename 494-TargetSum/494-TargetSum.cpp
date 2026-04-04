// Last updated: 4/4/2026, 11:04:39 PM
class Solution {
public:
int cnt=0;
    void solve(vector<int>& nums,int temp,int idx,int& target){
        if(idx==nums.size()){
            if(temp==target)    cnt++;
            return;
        }

        solve(nums,temp-nums[idx],idx+1,target);
        solve(nums,temp+nums[idx],idx+1,target);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        solve(nums,0,0,target);
        
        return cnt;
    }
};