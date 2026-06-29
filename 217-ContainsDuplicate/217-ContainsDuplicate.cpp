// Last updated: 6/29/2026, 8:30:28 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        set<int> se;
5        for(int num:nums){
6            if(se.count(num))   return true;
7            else    se.insert(num);
8        }
9        return false;
10    }
11};