// Last updated: 4/4/2026, 10:58:07 PM
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ind=(1ll*cost1*need1)+(1ll*cost2*need2);
        long long both=1ll*max(need1,need2)*costBoth;
        long long partialBoth=1ll*min(need1,need2)*costBoth;
        if(need1>need2){
            partialBoth+=1ll*(need1-need2)*cost1;
        }else{
            partialBoth+=1ll*(need2-need1)*cost2;
        }
        return min({ind,both,partialBoth});
    }
};