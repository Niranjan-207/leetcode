// Last updated: 4/4/2026, 11:07:48 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val)    nums[idx++]=nums[i];
        }
        return idx;
    }
};