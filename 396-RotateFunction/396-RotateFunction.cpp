// Last updated: 5/1/2026, 10:35:48 PM
1class Solution {
2public:
3    int maxRotateFunction(vector<int>& nums) {
4        int n=nums.size();
5
6        long sum=0,tot=0;
7        for(int i=0;i<n;i++){
8            sum+=nums[i];
9            tot+=(long)i*nums[i];
10        }
11
12        long ans=tot;
13        for(int i=1;i<n;i++){
14            tot=tot+sum-((long)n*nums[n-i]);
15            ans=max(ans,tot);
16        }
17        return ans;
18    }
19};