// Last updated: 4/4/2026, 11:00:43 PM
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> mp;
        for (int i=0;i<items1.size();i++) {
            int a=items1[i][0];
            int b=items1[i][1];
            mp[a] += b;
        }
        for (int i=0;i<items2.size();i++) {
            int a=items2[i][0];
            int b=items2[i][1];
            mp[a] += b;
        }
        vector<vector<int>> ans;
        for(auto &[a,b]:mp){
            ans.push_back({a,b});
        }
        return ans;
    }
};