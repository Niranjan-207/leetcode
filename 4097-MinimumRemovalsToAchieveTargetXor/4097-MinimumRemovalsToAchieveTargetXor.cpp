// Last updated: 4/4/2026, 10:58:29 PM
class Solution {
public:
    int minRemovals(vector<int>& nums, int target) {
        int mv=16384;

        vector<int> dp(mv,-1);
        dp[0]=0;
        for(int num:nums){
            vector<int> ndp=dp;
            for(int i=0;i<mv;i++){
                if(dp[i]!=-1){
                    int nx=i^num;
                    ndp[nx]=max(ndp[nx],dp[i]+1);
                }
            }
            dp=(ndp);
        }
        if(target>=mv || dp[target]==-1) return -1;
        return nums.size()-dp[target];
    }
};