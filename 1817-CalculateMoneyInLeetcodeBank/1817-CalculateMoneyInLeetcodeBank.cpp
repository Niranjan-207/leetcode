// Last updated: 4/4/2026, 11:01:43 PM
class Solution {
public:
    int totalMoney(int n) {
        
        int ans=0;
        int day=1;
        int cost=1;
        int wcst=2;

        while(n>0){
            
            if(day==8){
                day=1;
                cost=wcst++;
            }ans+=cost;
            
            day++;
            cost++;
            n--;
        }
        return ans;
    }
};