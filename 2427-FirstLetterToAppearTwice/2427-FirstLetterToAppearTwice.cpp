// Last updated: 4/4/2026, 11:00:46 PM
class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> se;

        for(char c:s){
            if(se.find(c)!=se.end())
                return c;
            
            se.insert(c);
            
        }

        return 'a';
    }
};