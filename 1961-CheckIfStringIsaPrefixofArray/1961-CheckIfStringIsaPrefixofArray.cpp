// Last updated: 4/18/2026, 10:32:25 PM
1class Solution {
2public:
3    bool isPrefixString(string s, vector<string>& words) {
4        string ans="";
5        for(string word:words){
6            ans+=word;
7            if(ans.length()==s.length() && s==ans)  return true;
8            if(s.find(ans)==-1) return false;
9        }
10        return false;
11    }
12};