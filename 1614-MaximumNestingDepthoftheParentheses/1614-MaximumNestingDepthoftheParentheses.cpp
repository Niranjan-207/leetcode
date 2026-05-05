// Last updated: 5/5/2026, 10:42:37 AM
1class Solution {
2public:
3    int minAddToMakeValid(string s) {
4        int open=0,moves=0;
5        for(char c:s){
6            if(c=='(')  open++;
7            else{
8                if(open>0){
9                    open--;
10                }else{
11                    moves++;
12                }
13            }
14        }
15        return open+moves;
16    }
17};