// Last updated: 5/11/2026, 9:05:22 AM
1class Solution {
2public:
3    int alternateDigitSum(int n) {
4        string s=to_string(n);
5        int sum=0;
6        for(int i=0;i<s.length();i++){
7            if(!(i&1))    sum+=(s[i]-'0');
8            else    sum-=(s[i]-'0');
9        }
10        return sum;
11    }
12};