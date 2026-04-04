// Last updated: 4/4/2026, 11:04:35 PM
class Solution {
public:
    bool detectCapitalUse(string word) {
        int uc=0,lc=0,n=word.length();
        for(char c:word){
            if(c>='a' && c<='z')    lc++;
            else    uc++;
        }

        if(uc==n || lc==n)  return true;
        if(word[0]>='A' && word[0]<='Z' && uc==1)   return true;
        return false;
    }
};