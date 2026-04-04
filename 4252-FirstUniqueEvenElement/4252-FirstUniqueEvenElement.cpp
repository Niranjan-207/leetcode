// Last updated: 4/4/2026, 10:57:22 PM
class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        for(int num:nums){
            if(mp[num]==1 && num%2==0){
                return num;
            }
        }
        return -1;
    }
};