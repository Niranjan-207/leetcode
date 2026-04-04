// Last updated: 4/4/2026, 11:06:22 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,n=nums.size(),r=n-1;
        int ans=INT_MAX;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }else{
                if(ans>nums[mid]){
                    ans=nums[mid];
                }
                r=mid-1;
            }
        }
        return ans;
    }
};