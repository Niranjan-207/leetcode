// Last updated: 4/4/2026, 11:07:29 PM
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        long long exp = n;
        
        if (exp < 0) {
            x = 1 / x;
            exp = -exp;
        }
        double result=1;
        while(exp>0){
            if(exp%2==1){
                result*=x;
            }
            x*=x;
            exp/=2;
        }
        return result;
    }
};