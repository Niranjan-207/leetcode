// Last updated: 4/4/2026, 11:03:19 PM
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> se;
        for(int num:nums){
            if(se.count(num))   return num;
            se.insert(num);
        }
        return 0;
    }
};