// Last updated: 6/25/2026, 10:51:53 AM
1class Solution {
2public:
3    int countMajoritySubarrays(vector<int>& nums, int target) {
4        int n=nums.size();
5        
6        int ans=0;
7        for(int i=0;i<n;i++){
8            int tcnt=0;
9            for(int j=i;j<n;j++){
10                if(nums[j]==target) tcnt++;
11                if(tcnt>(j-i+1)/2)  ans++;
12            }
13        }
14        return ans;
15    }
16};