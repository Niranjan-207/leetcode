// Last updated: 6/29/2026, 11:01:32 PM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string,vector<string>> mp;
5        for(string s:strs){
6            string temp=s;
7            sort(begin(temp),end(temp));
8            mp[temp].push_back(s);
9        }
10
11        vector<vector<string>> ans;
12        for(auto [key,val]:mp){
13            ans.push_back(val);
14        }
15        return ans;
16    }
17};