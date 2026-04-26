// Last updated: 4/27/2026, 12:51:14 AM
1class Solution {
2public:
3    int pivotInteger(int n) {
4        int tot=(n*(n+1))/2;
5        int cur=0;
6        for(int i=1;i<=n;i++){
7            cur+=i;
8            int ri=tot-cur+i;
9            if(cur==ri) return i;
10        }
11        return -1;
12    }
13};