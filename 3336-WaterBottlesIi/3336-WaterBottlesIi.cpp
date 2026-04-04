// Last updated: 4/4/2026, 11:00:01 PM
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles;
        while(numBottles>=numExchange){
            numBottles-=numExchange-1;
            ans++;
            numExchange++;
        }
        return ans;
    }
};