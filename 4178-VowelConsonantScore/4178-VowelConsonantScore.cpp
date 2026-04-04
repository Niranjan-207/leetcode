// Last updated: 4/4/2026, 10:57:50 PM
class Solution {
public:
    int vowelConsonantScore(string s) {
        set<int> se={'a','e','i','o','u'};
        int v=0,c=0;
        for(char ch:s){
            if(se.count(ch)) v++;
            else if(ch>='a' && ch<='z')   c++;
        }
        
        if(c>0){
            return v/c;
        }
        return 0;
    }
};