// Last updated: 4/4/2026, 10:57:34 PM
class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> mp,fre;
        for(int num:nums)   mp[num]++;
        for(auto &[num,f]:mp) fre[f]++;

        for(int num:nums){
            if(fre[mp[num]]==1) return num;
        }
        return -1;
    }
};