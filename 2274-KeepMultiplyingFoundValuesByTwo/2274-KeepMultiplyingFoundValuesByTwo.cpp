// Last updated: 4/4/2026, 11:01:00 PM
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> se;
        for(int num:nums){
            se.insert(num);
        }

        while(se.find(original)!=se.end()){
            original*=2;
        }
        return original;
    }
};