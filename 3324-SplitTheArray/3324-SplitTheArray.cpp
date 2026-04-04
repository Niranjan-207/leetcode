// Last updated: 4/4/2026, 11:00:03 PM
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto& [a,b]:mp){
            if(b==1 || b==2){
                continue;
            }
            return false;
        }
        return true;
    }
};