// Last updated: 4/6/2026, 7:12:41 PM
1class Solution {
2public:
3    int differenceOfSum(vector<int>& nums) {
4        int tsum=accumulate(begin(nums),end(nums),0);
5        int dsum=0;
6        for(int num:nums){
7            string s=to_string(num);
8            for(char c:s){
9                dsum+=(c-'0');
10            }
11        }
12        return abs(dsum-tsum);
13    }
14};