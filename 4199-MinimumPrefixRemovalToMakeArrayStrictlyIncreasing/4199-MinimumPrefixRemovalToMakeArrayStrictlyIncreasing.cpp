// Last updated: 4/4/2026, 10:57:42 PM
class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int len=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
                len=i;
            }
        }
        return len;
    }
};