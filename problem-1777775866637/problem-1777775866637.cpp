// Last updated: 5/3/2026, 8:07:46 AM
1class Solution {
2public:
3    vector<int> countOppositeParity(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> ans(n,0);
6        for(int i=0;i<n;i++){
7            for(int j=i+1;j<n;j++){
8            if(nums[i]%2 != nums[j]%2 )
9                ans[i]++;
10            }
11        }
12        return ans;
13    }
14};