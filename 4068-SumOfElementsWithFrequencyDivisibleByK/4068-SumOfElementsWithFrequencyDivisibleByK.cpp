// Last updated: 4/4/2026, 10:58:43 PM
class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        int ans=0;

        for(int num:nums){
                if(mp[num]%k==0) ans+=num;
        }
        return ans;
    }
};