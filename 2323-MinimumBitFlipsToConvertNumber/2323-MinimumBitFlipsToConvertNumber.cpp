// Last updated: 4/4/2026, 11:00:52 PM
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int dif=start^goal;
        int cnt=0;
        while(dif>0){
            if(dif&1)   cnt++;
            dif>>=1;
        }
        dif=0;
        return cnt;
    }
};