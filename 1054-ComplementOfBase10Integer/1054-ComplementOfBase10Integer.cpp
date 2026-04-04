// Last updated: 4/4/2026, 11:03:05 PM
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)    return 1;
        int cnt=0;
        int temp=n;
        while(temp>0){
            cnt++;
            temp>>=1;
        }
        int mask=(1<<cnt)-1;
        return (mask^n);
    }
};