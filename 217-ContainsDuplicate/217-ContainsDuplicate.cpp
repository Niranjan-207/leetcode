// Last updated: 4/4/2026, 11:05:48 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> se;
        for(int num:nums)   se.insert(num);
        if(nums.size()==se.size())  return false;
        return true;
    }
};