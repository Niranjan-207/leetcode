// Last updated: 4/4/2026, 11:03:55 PM
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int num=*max_element(nums.begin(),nums.end());
        int idx=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]*2>num && nums[i]!=num){
                return -1;
            }
            if(nums[i]==num){
                idx=i;
            }
        }
        return idx;
    }
};