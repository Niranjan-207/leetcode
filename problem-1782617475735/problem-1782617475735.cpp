// Last updated: 6/28/2026, 9:01:15 AM
1class Solution {
2public:
3    #define ll long long
4    long long maxSubarraySum(vector<int>& nums, int k) {
5        ll ans=LLONG_MIN;
6
7        ll s0=LLONG_MIN/2,
8            s1Mul=LLONG_MIN/2,
9            s1Div=LLONG_MIN/2,
10            s2=LLONG_MIN/2;
11
12        for(int num:nums){
13            ll div=num/k;
14            ll mul=1ll*num*k;
15
16            ll ns0=max(1ll*num,s0+num);
17
18            ll ns1Mul=max({mul,s0+mul,s1Mul+mul});
19            ll ns1Div=max({div,s0+div,s1Div+div});
20
21            ll ns2=max({1ll*num,s1Mul+num,s1Div+num,s2+num});
22
23            s2=ns2;
24            s0=ns0;
25            s1Div=ns1Div;
26            s1Mul=ns1Mul;
27
28            ans=max({ans,s0,s1Div,s1Mul,s2});
29            
30        }
31        return ans;
32    }
33};