// Last updated: 4/4/2026, 10:57:39 PM
class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> ans;
        map<int,int> mp;
        for(int bulb:bulbs){
            mp[bulb]++;
        }

        for(auto [b,f]:mp){
            if(f&1) ans.push_back(b);
        }
        return ans;
    }
};