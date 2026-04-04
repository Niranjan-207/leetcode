// Last updated: 4/4/2026, 11:01:58 PM
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int cnt=numBottles+(numBottles-1)/(numExchange-1);
        return cnt;
    }
};