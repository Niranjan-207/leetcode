// Last updated: 6/30/2026, 1:01:06 AM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int l=0,r=nums.size()-1;
5
6        while(l<=r){
7            int mid=l+(r-l)/2;
8            if(nums[mid]==target)   return mid;
9            else if(nums[l]<=nums[mid]){
10                if(nums[l]<=target && target<nums[mid])    r=mid-1;
11                else    l=mid+1;
12            }else{
13                if(nums[mid]<target && target<=nums[r])  l=mid+1;
14                else    r=mid-1;
15            }
16        }
17        return -1;
18    }
19};