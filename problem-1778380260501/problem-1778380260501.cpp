// Last updated: 5/10/2026, 8:01:00 AM
1class Solution {
2public:
3    vector<int> concatWithReverse(vector<int>& nums) {
4        vector<int> ans;
5        for(int num:nums) ans.push_back(num);
6        for(int i=nums.size()-1;i>=0;i--) ans.push_back(nums[i]);
7        return ans;
8    }
9};