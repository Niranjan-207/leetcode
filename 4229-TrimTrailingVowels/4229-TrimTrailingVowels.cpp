// Last updated: 4/4/2026, 10:57:30 PM
class Solution {
public:
    string trimTrailingVowels(string s) {
        int n=s.length();
        int idx=n-1;
        while(idx>=0 && (s[idx]=='a' ||s[idx]=='e' ||s[idx]=='i' ||s[idx]=='o' ||s[idx]=='u'  )){
            idx--;
        }

        if(idx==-1) return "";
        return s.substr(0,idx+1);
    }
};