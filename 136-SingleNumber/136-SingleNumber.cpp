// Last updated: 4/4/2026, 11:06:36 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int num:nums)   ans^=num;
        return ans;
    }
};