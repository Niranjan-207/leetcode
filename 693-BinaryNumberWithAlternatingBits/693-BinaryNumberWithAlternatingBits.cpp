// Last updated: 4/4/2026, 11:04:13 PM
class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s=bitset<32>(n).to_string();
        s.erase(0,s.find_first_not_of('0'));

        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1])    return false;
        }

        return true;
    }
};