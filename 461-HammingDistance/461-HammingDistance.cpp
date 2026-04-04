// Last updated: 4/4/2026, 11:04:46 PM
class Solution {
public:
    int hammingDistance(int x, int y) {
        int dif=x^y;
        int cnt=0;
        while(dif>0){
            if(dif&1)   cnt++;
            dif>>=1;
        }
        return cnt;
    }
};