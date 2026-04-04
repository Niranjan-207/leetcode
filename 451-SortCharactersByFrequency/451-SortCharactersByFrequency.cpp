// Last updated: 4/4/2026, 11:04:43 PM
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> om;
        for(char& c: s){
            om[c]++;
        }
        vector<pair<int,char>> cnt;
        for(auto& [c,fre]:om){
            pair<int,char> temp={fre,c};
            cnt.push_back(temp);
        }
       sort(cnt.begin(), cnt.end(), [](const pair<int, char>& a, const pair<int, char>& b) {
        return a.first > b.first;
    });
        string ans="";
        for(int i=0;i<cnt.size();i++){
            while(cnt[i].first--)  ans+=cnt[i].second;
        }
        return ans;
    }
};