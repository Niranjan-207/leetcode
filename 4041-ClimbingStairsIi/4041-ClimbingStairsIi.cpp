// Last updated: 4/4/2026, 10:58:57 PM
class Solution {
public:
    int climbStairs(int n, vector<int>& cost) {
        vector<int> costs(n+1);
            for(int i=1;i<=n;i++) costs[i]=cost[i-1];
        
        vector<long long> dp(n+1,1e15);
        dp[0]=0;
        for(int i=0;i<n;i++){
            for(int st=1;st<=3;st++){
                int j=i+st;
                if(j<=n){
                    dp[j]=min(dp[j],dp[i]+costs[j]+1ll*st*st);
                }
            }
        }
        return (int)dp[n];
    }
};