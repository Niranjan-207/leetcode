// Last updated: 4/4/2026, 11:02:38 PM
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;long long pro=1;
        while(n){
            int d=n%10;
            sum+=d;
            pro*=d;
            n/=10;
        }
        return (pro-sum);
    }
};