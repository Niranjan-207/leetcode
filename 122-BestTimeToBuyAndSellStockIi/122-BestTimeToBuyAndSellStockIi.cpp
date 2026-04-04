// Last updated: 4/4/2026, 11:06:41 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++){
            mi=min(mi,prices[i]);
            if((prices[i]-mi) > 0){
                ans+=(prices[i]-mi);
                
                mi=prices[i];
              
            }
        }
        return ans;
    }
};