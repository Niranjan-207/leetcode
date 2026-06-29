// Last updated: 6/29/2026, 11:16:50 PM
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        long long pro=1;
5        int cnt0=0;
6        for(int num:nums){
7            if(num==0)  cnt0++;
8            else    pro*=num;
9        }
10
11        int n=nums.size();
12        vector<int> ans(n,0);
13        if(cnt0>1){
14            return ans;
15        }
16
17        for(int i=0;i<n;i++){
18            if(cnt0==1 && nums[i]!=0){
19                ans[i]=0;
20            }
21            else if(nums[i]==0){
22                ans[i]=pro;
23            }else{
24                ans[i]=pro/nums[i];
25            }
26        }
27        return ans;
28    }
29};