// Last updated: 4/4/2026, 10:59:55 PM
class Solution {
public:
    bool doesAliceWin(string s) {
        set<char> se={'a','e','i','o','u','A','E','I','O','U'};
        int cnt=0;
        for(char& c:s){
            if(se.find(c)!=se.end())    return true;
        }
        // if(cnt==0)  return false;
        // return true;
        return false;   
    }
};