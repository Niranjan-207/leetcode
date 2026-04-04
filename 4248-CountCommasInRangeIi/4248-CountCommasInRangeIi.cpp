// Last updated: 4/4/2026, 10:57:24 PM
class Solution {
public:
    long long countCommas(long long n) {
        long long cnt=0;
        long long th=1000;
        while(n>=th){
            cnt+=(n-th+1);
            if(th>1e15) break;
            th*=1000;
        }
        return cnt;
    }
};