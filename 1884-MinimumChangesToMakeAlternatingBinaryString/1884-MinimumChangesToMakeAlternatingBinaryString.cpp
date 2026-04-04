// Last updated: 4/4/2026, 11:01:40 PM
class Solution {
public:
    int minOperations(string s) {
        int s1=0,s0=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==(i%2?'0':'1')) s0++;
            if(s[i]==(i%2?'1':'0'))s1++;
        }
        return min(s0,s1);
    }
};