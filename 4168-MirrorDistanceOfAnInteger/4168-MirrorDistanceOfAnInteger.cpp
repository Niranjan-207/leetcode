// Last updated: 4/4/2026, 10:57:56 PM
class Solution {
public:
    
    int mirrorDistance(int n) {
        string s=to_string(n);
        reverse(s.begin(),s.end());
        int num=stoi(s);
        return abs(num-n);
    }
};