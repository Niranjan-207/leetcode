// Last updated: 5/11/2026, 8:56:46 AM
1class Solution {
2public:
3    vector<int> separateDigits(vector<int>& nums) {
4        vector<int> ans;
5        for(int num:nums){
6            string s=to_string(num);
7            for(char c:s){
8                ans.push_back(c-'0');
9            }
10        }
11        return ans;
12    }
13};