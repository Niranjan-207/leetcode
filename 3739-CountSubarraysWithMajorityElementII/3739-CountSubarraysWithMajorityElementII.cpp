// Last updated: 6/27/2026, 12:36:23 AM
1class Solution {
2public:
3    #define ll long long
4    long long countMajoritySubarrays(vector<int>& nums, int target) {
5        unordered_map<ll,ll> mp;
6        
7        ll cumSum=0;
8        mp[0]=1;
9
10        ll validPoints=0,ans=0;
11
12        for(int num:nums){
13            if(num==target){
14                validPoints+=mp[cumSum];
15                cumSum++;
16            }else{
17                cumSum-=1;
18                validPoints-=mp[cumSum];
19            }
20            mp[cumSum]++;
21            ans+=validPoints;
22        }
23        return ans;
24
25        
26    }
27};