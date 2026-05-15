// Last updated: 5/15/2026, 12:08:45 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int n=nums.size();
5        int l=0,h=n-1;
6        int ans=INT_MAX;
7        while(l<=h){
8            int mid=l+(h-l)/2;
9
10            if(nums[mid]>nums[h]) l=mid+1;
11            else{
12                if(ans>nums[mid]){
13                    ans=nums[mid];
14                }
15                h=mid-1;
16            }   
17        }
18        return ans;
19    }
20};