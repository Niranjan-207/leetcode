// Last updated: 6/29/2026, 11:20:11 PM
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> pre(n,1);
6        for(int i=1;i<n;i++){
7            pre[i]=pre[i-1]*nums[i-1];
8        }
9
10        vector<int> suf(n,1);
11        for(int i=n-2;i>=0;i--){
12            suf[i]=suf[i+1]*nums[i+1];
13        }
14
15        vector<int> ans(n);
16        for(int i=0;i<n;i++){
17            ans[i]=pre[i]*suf[i];
18        }
19        return ans;
20    }
21};