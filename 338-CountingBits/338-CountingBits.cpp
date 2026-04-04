// Last updated: 4/4/2026, 11:05:12 PM
class Solution {
public:
    vector<int> countBits(int n) {
        // ios_base::sync_with_stdio(false);
        // cin.tie(nullptr);
        vector<int> dp(n+1);
        for(int i=1;i<=n;i++){
           dp[i]=dp[i>>1]+(i&1);
        }
        return dp;
    }
};