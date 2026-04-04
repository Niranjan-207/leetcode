// Last updated: 4/4/2026, 11:07:26 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int cs=ans;
        for(int i=1;i<nums.size();i++){
            cs=max(nums[i],cs+nums[i]);
            ans=max(ans,cs);
        }
        return ans;
    }
};