// Last updated: 4/4/2026, 11:06:05 PM
class Solution {
public:
    int hammingWeight(int n) {
        int cnt=0;
        while(n>0){
            n=n&(n-1);
            cnt++;
        }
        return cnt;

    }
};