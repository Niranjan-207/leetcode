// Last updated: 4/26/2026, 8:54:58 PM
1class Solution {
2public:
3    int compareBitonicSums(vector<int>& nums) {
4        long long pre=nums[0];
5        int i=1,n=nums.size();
6        while(i<n && nums[i]>nums[i-1]){
7            pre+=nums[i];
8            i++;
9        }i--;
10        long long suf=accumulate(begin(nums),end(nums),0ll)-pre+nums[i];
11        if(pre>suf) return 0;
12        else if(suf>pre)    return 1;
13        return -1;
14    }
15};