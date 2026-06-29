// Last updated: 6/29/2026, 11:47:54 PM
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int l=0,r=s.length()-1,n=s.length();
5
6        while(l<r){
7            
8            while(l<r && !isalnum(s[l]))    l++;
9            while(l<r && !isalnum(s[r]))    r--;
10
11            int lc=tolower(s[l]);l++;
12            int rc=tolower(s[r]);r--;
13            if(lc!=rc)  return false;
14            
15        }
16        return true;
17    }
18};