// Last updated: 4/4/2026, 11:01:46 PM
class Solution {
public:
    int concatenatedBinary(int n) {
        long long ans=0;
        const long long mod=1e9+7;
        int bits=0;
        for(int i=1;i<=n;i++){
            if((i&(i-1))==0)    bits++;
            ans=((ans<<bits)|i)%mod;
        }
        return ans;
    }
};