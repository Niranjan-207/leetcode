// Last updated: 4/4/2026, 10:58:13 PM
class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(string s:words){
            if(s.length()<k)    continue;
            mp[s.substr(0,k)]+=1;
        }
        int cnt=0;
        for(auto&[s,c]:mp){
            if(c>1) cnt++;
        }
        return cnt;
    }
};