// Last updated: 4/9/2026, 10:33:52 PM
1class Solution {
2public:
3    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
4        int mod=1e9+7;
5        for(vector<int> q:queries){
6            int l=q[0],r=q[1],k=q[2],v=q[3];
7            int idx=l;
8            while(idx<=r){
9                nums[idx]=((1ll*nums[idx]%mod)*(1ll*v%mod))%mod;;
10                idx+=k;
11            }
12            
13        }
14        int ans=0;
15        for(int num:nums)   ans^=num;
16        return ans;
17    }
18};