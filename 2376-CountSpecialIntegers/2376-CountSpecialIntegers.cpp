// Last updated: 4/29/2026, 2:19:28 PM
1class Solution {
2public:
3    int dp[11][2][2][1024];
4
5    int solve(string s,int idx,int tight,int lz,int mask){
6        if(idx==s.length()) return lz?0:1;
7        if(dp[idx][tight][lz][mask]!=-1)    return dp[idx][tight][lz][mask];
8        int lb=0;
9        int ub=(tight?s[idx]-'0':9);
10
11        int ans=0;
12        for(int dig=lb;dig<=ub;dig++){
13            int nlz=(lz && dig==0);
14
15            if(!nlz && mask&(1<<dig))    continue;
16            
17            int nmask=(nlz?mask:(mask|(1<<dig)));
18
19            ans+=solve(s,idx+1,(tight && dig==ub),nlz,nmask);
20        }
21        return dp[idx][tight][lz][mask]=ans;
22    }
23
24    int countSpecialNumbers(int n) {
25        string s=to_string(n);
26        memset(dp,-1,sizeof(dp));
27        return solve(s,0,1,1,0); // idx,tight,lz,mask
28    }
29};