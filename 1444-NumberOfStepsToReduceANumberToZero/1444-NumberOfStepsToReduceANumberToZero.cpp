// Last updated: 4/4/2026, 11:02:31 PM
class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0) return 0;
        int cnt=0;
        while(num>0){
            if(num&1) cnt+=2;
            else cnt++;
            num>>=1;
        }
        return cnt-1;
    }
};