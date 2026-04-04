// Last updated: 4/4/2026, 10:59:26 PM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        return (sum%k);

    }
};