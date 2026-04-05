// Last updated: 4/5/2026, 11:39:12 AM
1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        int u=0,l=0;
5        for(char c:moves){
6            if(c=='U')  u++;
7            else if(c=='D') u--;
8            else if(c=='L') l++;
9            else    l--;
10        }
11        return (u==0 && l==0);
12    }
13};