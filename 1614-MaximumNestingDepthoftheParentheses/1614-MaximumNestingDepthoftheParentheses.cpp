// Last updated: 5/5/2026, 10:12:55 AM
1class Solution {
2public:
3    int maxDepth(string s) {
4        int len=0;
5        int ans=0;
6        for(char c:s){
7            if(c=='('){  len++;ans=max(ans,len);}
8            else if(c==')') len--;
9            
10        }
11        return ans;
12    }
13};