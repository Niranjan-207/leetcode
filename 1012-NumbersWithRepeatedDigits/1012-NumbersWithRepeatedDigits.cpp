// Last updated: 4/29/2026, 3:06:22 PM
1class Solution {
2public:
3    int dp[11][2][2][1024][2];
4    int solve(string s,int idx,bool tight,bool lz,int mask,bool dup){
5        if(idx==s.length())  return (!lz && dup)?1:0;
6        if(dp[idx][tight][lz][mask][dup]!=-1)   return dp[idx][tight][lz][mask][dup];
7        int lb=0;
8        int ub=tight?s[idx]-'0':9;
9
10        int cnt=0;
11        for(int dig=lb;dig<=ub;dig++){
12            int nlz=(lz && dig==0);
13            int ntight=(tight && dig==ub);
14            
15            if(nlz) cnt+=solve(s,idx+1,ntight,nlz,mask,dup);
16            else{
17                int nmask=mask| (1<<dig);
18                bool used=(mask&(1<<dig));
19                cnt+=solve(s,idx+1,ntight,nlz,nmask,dup||used);
20            }
21        }
22        return dp[idx][tight][lz][mask][dup]=cnt;
23    }
24
25    int numDupDigitsAtMostN(int n) {
26        string s=to_string(n);
27        memset(dp,-1,sizeof(dp));
28        return solve(s,0,1,1,0,0); //idx,tight,lz,mask,dup
29    }
30};