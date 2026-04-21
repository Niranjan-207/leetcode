// Last updated: 4/21/2026, 9:55:37 AM
1class Solution {
2public:
3    int maximumDifference(vector<int>& nums) {
4        int mi=nums[0];
5        int n=nums.size();
6        int dif=-1;
7        for(int i=1;i<n;i++){
8            if(nums[i]>mi){
9                dif=max(dif,nums[i]-mi);
10            }
11            mi=min(mi,nums[i]);
12        }
13        return dif;
14    }
15};