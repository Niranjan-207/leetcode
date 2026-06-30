// Last updated: 6/30/2026, 7:33:29 PM
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        unordered_map<int,int> mp;
5        mp[0]=1;
6        int sum=0;
7        int cnt=0;
8        for(int num:nums){
9            sum+=num;
10            int need=sum-k;
11            if(mp.contains(need)){
12                cnt+=mp[need];
13            }
14            mp[sum]++;
15        }
16        return cnt;
17    }
18};