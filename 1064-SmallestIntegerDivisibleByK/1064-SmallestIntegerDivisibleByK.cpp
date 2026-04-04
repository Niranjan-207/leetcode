// Last updated: 4/4/2026, 11:03:02 PM
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        long long rem=0;
        for(int i=1;i<=k;i++){
            int rem=((1ll*rem*10)+1)%k;
            if(rem==0)  return i;
        }
        return -1;
    }
};