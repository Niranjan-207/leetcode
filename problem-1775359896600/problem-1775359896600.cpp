// Last updated: 4/5/2026, 9:01:36 AM
1class Solution {
2public:
3    long long sol(vector<int>& nums,int idx){
4
5        long long ops=0;
6        for(int i=idx;i<nums.size()-1;i+=2){
7            int req=max(nums[i-1],nums[i+1])+1;
8            if(nums[i]<req){
9                ops+=(req-nums[i]);
10            }
11        }
12        return ops;
13    }
14
15    long long cost(vector<int>& nums,int i){
16        long long req=max(nums[i-1],nums[i+1])+1;
17        return max(0ll,req-nums[i]);
18    }
19    
20    long long minIncrease(vector<int>& nums) {
21        int n=nums.size();
22        if(n==3) return sol(nums,1);
23
24        if(n%2==1){
25            return sol(nums,1);
26        }
27
28
29        int m=(n-2)/2;
30        vector<long long> pre(m+1,0);
31        vector<long long> suf(m+1,0);
32
33        for(int i=0;i<m;i++){
34            pre[i+1]=pre[i]+cost(nums,1+i*2);
35        }
36        for(int i=m-1;i>=0;i--){
37            suf[i]=suf[i+1]+cost(nums,2+i*2);
38        }
39
40        long long mops=-1;
41        for(int i=0;i<=m;i++){
42            long long cops=pre[i]+suf[i];
43            if(mops==-1 || cops<mops){
44                mops=cops;
45            }
46        }
47        return mops;
48    }
49};