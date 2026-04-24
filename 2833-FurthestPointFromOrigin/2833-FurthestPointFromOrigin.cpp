// Last updated: 4/24/2026, 9:48:36 PM
1class Solution {
2public:
3    int furthestDistanceFromOrigin(string moves) {
4        int l=0,r=0,u=0;
5        for(char c:moves){
6            if(c=='L')  l++;
7            else if(c=='R') r++;
8            else    u++;
9        }
10        return (abs(r-l)+u);
11    }
12};