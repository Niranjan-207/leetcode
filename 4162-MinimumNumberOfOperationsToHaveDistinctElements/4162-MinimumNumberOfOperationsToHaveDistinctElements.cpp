// Last updated: 4/4/2026, 10:57:58 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_set<int> se;
        int n=nums.size();
        int idx=n-1;
        while(idx>=0 && !se.count(nums[idx])){
            
            se.insert(nums[idx]);
            idx--;
        }
            if(idx<0) return 0;
        return (idx+3)/3;
    }
};