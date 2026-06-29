// Last updated: 6/29/2026, 11:05:40 PM
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4        unordered_map<int,int> mp;
5        for(int num:nums)   mp[num]++;
6
7        vector<pair<int,int>> arr;
8        for(auto& [num,fre]:mp){
9            arr.push_back({fre,num});
10        }
11        sort(rbegin(arr),rend(arr));
12        vector<int> ans;
13        int i=0;
14        while(k--){
15            ans.push_back(arr[i++].second);
16        }
17        return ans;
18    }
19};