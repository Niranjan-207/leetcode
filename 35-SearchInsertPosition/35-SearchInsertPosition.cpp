// Last updated: 4/4/2026, 11:07:41 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int ans=h+1;

        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]>target)  ans=m;
            if(nums[m]==target) return m;
            else if(target>nums[m]) l=m+1;
            else h=m-1;
        }
        return ans;
    }
};