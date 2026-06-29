// Last updated: 6/29/2026, 10:58:04 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mp;
5        for(int i=0;i<nums.size();i++){
6            int num=nums[i];
7            int need=target-num;
8            if(mp.count(need)){
9                return {mp[need],i};
10            }
11            mp[num]=i;
12        }
13        return {};
14    }
15};