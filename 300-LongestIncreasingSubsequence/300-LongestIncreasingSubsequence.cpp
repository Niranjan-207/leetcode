// Last updated: 5/9/2026, 1:55:26 PM
1class Solution {
2public:
3    int lengthOfLIS(vector<int>& nums) {
4        vector<int> ans;
5        for(int num:nums){
6            if(ans.size()==0 || ans.back()<num){
7                ans.push_back(num);
8            }else{
9                auto it=lower_bound(begin(ans),end(ans),num);
10                *it=num;
11            }
12        }
13        return ans.size();
14    }
15};