// Last updated: 4/4/2026, 11:01:32 PM
class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int cnt=0;
        for(char c:s){
            if(c==' ')  cnt++;
            if(cnt==k)  return ans;
            ans+=c;
        }
        return ans;
    }
};