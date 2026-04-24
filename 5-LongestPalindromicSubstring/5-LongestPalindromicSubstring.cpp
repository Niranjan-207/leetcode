// Last updated: 4/24/2026, 10:42:50 PM
1class Solution {
2public:
3    string check(string& s,int l,int r){
4        int n=s.length();
5        while(l>=0 && r<n && s[l]==s[r]){
6            l--;r++;
7        }
8        return s.substr(l+1,r-l-1);
9    }
10
11    string longestPalindrome(string s) {
12        string ans="";
13        int n=s.length();
14
15        for(int i=0;i<n;i++){
16            string cur=check(s,i,i);
17            if(cur.length()>ans.length()) ans=cur;
18
19            cur=check(s,i,i+1);
20            if(cur.length()>ans.length()) ans=cur;
21        }
22        return ans;
23    }
24};