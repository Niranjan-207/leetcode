// Last updated: 4/4/2026, 11:07:42 PM
class Solution {
public:
    int bsl(vector<int>& nums,int target){
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){   ans=mid;r=mid-1;}
            else if(nums[mid]>target)   r=mid-1;
            else    l=mid+1;
        }
        return ans;
    }

    int bsr(vector<int>& nums,int target){
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){   
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]<target)   l=mid+1;
            else    r=mid-1;
        }
    
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(bsl(nums,target));
        ans.push_back(bsr(nums,target));

        return ans;
    }
};