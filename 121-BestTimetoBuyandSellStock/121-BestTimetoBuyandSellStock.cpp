// Last updated: 6/29/2026, 11:59:11 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int profit=0;
5        int buy=prices[0];
6        for(int i=1;i<prices.size();i++){
7            if(prices[i]<buy)   buy=prices[i];
8            else{
9                profit=max(profit,prices[i]-buy);
10                
11            }
12        }
13        return profit;
14    }
15};