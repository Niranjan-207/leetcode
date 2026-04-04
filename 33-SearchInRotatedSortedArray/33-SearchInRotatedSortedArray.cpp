// Last updated: 4/4/2026, 11:07:44 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target)   return mid;
            
            if(nums[mid]<=nums[h]){
               if(target>nums[mid] && target<=nums[h]){
                l=mid+1;
               }else{
                h=mid-1;
               }
            }else{
                if(nums[l]<=target && target<nums[mid]){
                    h=mid-1;
                }else{
                    l=mid+1;
                }
            }
        }
        return -1;
    }
};