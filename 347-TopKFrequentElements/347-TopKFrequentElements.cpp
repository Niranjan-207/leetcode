// Last updated: 4/4/2026, 11:05:07 PM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int& num:nums)  mp[num]++;
        vector<pair<int,int>> vec;
        
        for(auto& [num,freq]:mp){
            vec.push_back({freq,num});
        }
        sort(vec.rbegin(),vec.rend());
        vector<int> ans;
        for(int i=0;i<vec.size();i++){
            if(ans.size()==k)   break;
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};