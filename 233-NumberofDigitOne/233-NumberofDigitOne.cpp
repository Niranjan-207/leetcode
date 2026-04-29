// Last updated: 4/29/2026, 1:30:17 PM
1class Solution {
2public:
3    int dp[11][2][11];
4    int solve(string s,int idx,bool tight,int cnt){
5        if(idx==s.length()) return cnt;
6
7        if(dp[idx][tight][cnt]!=-1) return dp[idx][tight][cnt];
8        int lb=0;
9        int ub=(tight)?s[idx]-'0':9;
10        int ans=0;
11        for(int dig=lb;dig<=ub;dig++){
12            ans+=solve(s,idx+1,(tight && dig==ub),(dig==1)?cnt+1:cnt);
13        }
14        return dp[idx][tight][cnt]=ans;
15    }
16
17    int countDigitOne(int n) {
18        string s=to_string(n);
19        memset(dp,-1,sizeof(dp));
20        return solve(s,0,1,0);//idx,tight,cnt
21    }
22};