// Last updated: 4/25/2026, 10:59:41 PM
1class Solution {
2public:
3    bool validDigit(int n, int x) {
4        string s=to_string(n);
5        if(s[0]==(x+'0'))   return false;
6        for(int i=1;i<s.length();i++){
7            if(s[i]==(x+'0'))  return true;
8        }
9        return false;
10    }
11};