// Last updated: 4/4/2026, 10:57:46 PM
class Solution {
public:
    int residuePrefixes(string s) {
        string prefix="";
        set<char> se;
        int cnt=0;
        for(char c:s){
            prefix+=c;
            se.insert(c);
            if(se.size()==prefix.length()%3)  cnt++;
            
        }
        return cnt;
    }
};