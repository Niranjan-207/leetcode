// Last updated: 5/3/2026, 8:26:59 AM
1class Solution {
2public:
3    vector<int> minCost(vector<int>& nums, vector<vector<int>>& queries) {
4        int n=nums.size();
5        vector<int> closest(n);
6        closest[0]=1;closest[n-1]=n-2;
7        for(int i=1;i<n-1;i++){
8            int l=abs(nums[i]-nums[i-1]);
9            int r=abs(nums[i]-nums[i+1]);
10            if(l<=r) closest[i]=i-1;
11            else closest[i]=i+1;
12        }
13
14        vector<long long> pre(n),suf(n);
15        for(int i=0;i<n-1;i++){
16            if(closest[i]==i+1) pre[i+1]=pre[i]+1;
17            else pre[i+1]=pre[i]+(nums[i+1]-nums[i]);
18        }
19        for(int i=n-1;i>0;i--){
20            if(closest[i]==i-1) suf[i-1]=suf[i]+1;
21            else suf[i-1]=suf[i]+(nums[i]-nums[i-1]);
22        }
23        
24        vector<int> ans;
25        for(auto q:queries){
26            int l=q[0];
27            int r=q[1];
28            if(l<r) ans.push_back(pre[r]-pre[l]);
29            else ans.push_back(suf[r]-suf[l]);
30        }
31        return ans;
32    }
33};