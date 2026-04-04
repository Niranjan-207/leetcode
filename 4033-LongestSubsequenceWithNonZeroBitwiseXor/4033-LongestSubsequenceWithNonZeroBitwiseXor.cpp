// Last updated: 4/4/2026, 10:59:00 PM
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        
        int ans=0;
        for(int num:nums){
            ans^=num;
        }

        if(ans!=0)    return nums.size();
        if(nums[0]!=0) return nums.size()-1;
        
        return 0;
    }
};