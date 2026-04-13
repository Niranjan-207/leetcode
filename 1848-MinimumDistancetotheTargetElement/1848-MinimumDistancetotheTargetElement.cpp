// Last updated: 4/13/2026, 8:18:54 PM
1class Solution {
2public:
3    int getMinDistance(vector<int>& nums, int target, int start) {
4        int ans=INT_MAX;
5        for(int i=0;i<nums.size();i++){
6            if(nums[i]==target){
7                ans=min(ans,abs(i-start));
8            }
9        }
10        return ans;
11    }
12};