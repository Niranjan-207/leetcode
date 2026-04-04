// Last updated: 4/4/2026, 11:01:24 PM
class Solution {
public:
    int mod=1e9+7;
    int countGoodNumbers(long long n) {
       long long e=(n+1)/2;
       long long o=n/2;
       long long ans=(power(5,e)*power(4,o))%mod;
       return ans;
    }

    long long power(long long b,long long e){
        long long ans=1;
        b%=mod;
        while(e>0){
            if(e&1) ans=(ans*b)%mod;

            b=(b*b)%mod;
            e>>=1;
        }
        return ans;
    }
};