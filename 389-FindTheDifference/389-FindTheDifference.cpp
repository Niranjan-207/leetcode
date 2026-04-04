// Last updated: 4/4/2026, 11:05:01 PM
class Solution {
public:
    char findTheDifference(string s, string t) {
        char temp=0;
        for(char c:s)   temp^=c;
        for(char c:t)   temp^=c;
        return temp;
    }
};