// Last updated: 4/4/2026, 10:57:51 PM
class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin(),s.begin()+k);
        return s;
    }
};