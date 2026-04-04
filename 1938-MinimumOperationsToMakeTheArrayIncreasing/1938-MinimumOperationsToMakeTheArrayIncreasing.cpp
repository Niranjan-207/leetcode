// Last updated: 4/4/2026, 11:01:33 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                //int req=nums[i-1]+1;
                cnt+=(nums[i-1]+1-nums[i]);
                nums[i]=nums[i-1]+1;
            }
        }
        return cnt;
    }
};