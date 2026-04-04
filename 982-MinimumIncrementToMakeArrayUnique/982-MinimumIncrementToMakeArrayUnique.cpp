// Last updated: 4/4/2026, 11:03:20 PM
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int inc=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                int req=nums[i-1]+1;
                inc+=(req-nums[i]);
                nums[i]=req;
            }
        }
        return inc;
    }
};