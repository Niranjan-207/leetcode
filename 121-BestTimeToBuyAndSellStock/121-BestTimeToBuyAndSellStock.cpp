// Last updated: 4/4/2026, 11:06:43 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi=prices[0];
        int ans=0;
        for(int i=0;i<prices.size();i++){
            mi=min(mi,prices[i]);
            ans=max(ans,prices[i]-mi);
        }
        return ans;
    }
};