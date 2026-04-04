// Last updated: 4/4/2026, 11:04:09 PM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls=0;
        int rs=accumulate(begin(nums),end(nums),0);
        for(int i=0;i<nums.size();i++){
            rs-=nums[i];
            if(ls==rs){
                return i;
            }
            ls+=nums[i];
        }
        return -1;
    }
};