// Last updated: 4/26/2026, 8:58:45 AM
1class Solution {
2public:
3    #define ll long long
4    long long minOperations(vector<int>& nums) {
5        // int n=nums.size();
6        // long long sum=0;
7        // long long pre=nums[0];
8        // for(int i=1;i<n;i++){
9        //     // if((nums[i]+sum)<nums[i-1]){
10        //     //     sum+=(nums[i-1]-nums[i]);
11        //     // }
12        //     // if(nums[i]<pre){
13        //     //     sum+=(pre-nums[i]);
14        //     // }else{
15        //     //     pre=nums[i];
16        //     // }
17        //     cur=max(pre,(long long)[nums[i]]);
18        // }
19        // return sum;
20        ll sum=0;
21        stack<ll> st;
22        for(int i=0;i<nums.size();i++){
23            ll cur=nums[i];
24            ll p=0;
25
26            while(!st.empty() && st.top()> cur){
27                p=max(p,st.top());
28                st.pop();
29            }
30            if(p>0) sum+=(p-cur);
31            st.push(cur);
32        }
33        return sum;
34    }
35};