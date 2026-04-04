// Last updated: 4/4/2026, 11:02:50 PM
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        set<char> se;
        for(char c:brokenLetters){
            se.insert(c);
        }

        int cnt=0;
        bool contains=false;
        for(char c:text){
            if(c==' '){
                if(contains==false){
                    cnt++;
                }else{
                    contains=false;
                }

            }else{
                if(se.find(c)!=se.end())    contains=true;
            }
        }
        if(!contains)   cnt++;
        return cnt;
    }
};