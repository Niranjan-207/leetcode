// Last updated: 4/4/2026, 10:59:49 PM
class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string> ban;
        for(string& s:bannedWords)  ban.insert(s);
        int cnt=0;
        for(string& s:message){
            if(ban.count(s))    cnt++;
            if(cnt==2)  return true;
        }
        return false;
    }
};