// Last updated: 4/4/2026, 10:58:23 PM
class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return (nums[n-1]+nums[n-2]-nums[0]);
    }
};