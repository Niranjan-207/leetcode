// Last updated: 4/4/2026, 11:01:04 PM
class Solution {
public:
    bool checkString(string s) {
        int la=-1,fb=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a')   la=i;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='b'){   fb=i;break;}
        }
        return (la==-1 || fb==-1 || (fb>la));
    }
};