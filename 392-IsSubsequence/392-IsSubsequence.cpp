// Last updated: 4/4/2026, 11:05:00 PM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="")   return true;
        int p=0;
        for(int i=0;i<t.length();i++){
            if(t[i]==s[p]){
                p++;
            }
            if(p==s.length())   return true;
        }
        return false;
    }
};