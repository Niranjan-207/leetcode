// Last updated: 4/4/2026, 10:57:31 PM
class Solution {
public:
    bool isDigitorialPermutation(int n) {
        vector<long long> fac(10,1);
        for(int i=1;i<10;i++){
            fac[i]=fac[i-1]*i;
        }

        long long sum=0;
        long long tn=n;
        while(n>0){
            int dig=n%10;
            sum+=fac[dig];
            n/=10;
        }

        string sn=to_string(tn);
        string sumn=to_string(sum);
        sort(begin(sn),end(sn));
        sort(begin(sumn),end(sumn));
        return (sn==sumn);
    }
};