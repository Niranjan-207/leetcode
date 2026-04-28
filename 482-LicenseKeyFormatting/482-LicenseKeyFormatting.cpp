// Last updated: 4/28/2026, 10:29:23 PM
1class Solution {
2public:
3    string licenseKeyFormatting(string s, int k) {
4        string temp="";
5        int n=s.length();
6
7        for(char& c:s){
8            if(c!='-'){
9                if(c>='a' && c<='z')    c^=32;
10                temp+=c;
11            }
12        }
13
14        reverse(begin(temp),end(temp));
15        string ans="";
16        int cnt=0;
17        for(char c:temp){
18            if(cnt==k){
19                ans+='-';
20                cnt=0;
21            }
22            cnt++;
23            ans+=c;
24        }
25        reverse(begin(ans),end(ans));
26        return ans;
27    }
28};