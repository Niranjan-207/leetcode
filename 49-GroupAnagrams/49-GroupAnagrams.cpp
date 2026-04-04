// Last updated: 4/4/2026, 11:07:30 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string& s:strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto& [s,vec]:mp){
            ans.push_back(vec);
        }
        return ans;
    }
};