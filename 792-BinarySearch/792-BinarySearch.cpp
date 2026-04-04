// Last updated: 4/4/2026, 11:03:51 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]==target)   return m;
            else if(target>nums[m])   l=m+1;
            else    h=m-1;
        }
        return -1;
    }
};