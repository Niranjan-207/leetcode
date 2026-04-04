// Last updated: 4/4/2026, 10:57:26 PM
class Solution {
public:
    int countCommas(int n) {
       int cnt=0;
        int th=1000;
        while(n>=th){
            cnt+=(n-th+1);
            if(th>1e15) break;
            th*=1000;
        }
        return cnt;
    }
};