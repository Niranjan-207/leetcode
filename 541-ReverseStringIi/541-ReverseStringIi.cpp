// Last updated: 4/4/2026, 11:04:29 PM
class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length();
        for(int i=0;i<n;i+=(2*k)){
            reverse(s.begin()+i,s.begin()+((i+k)<n?(i+k):n));
        }
        return s;
    }
};