// Last updated: 4/4/2026, 11:05:06 PM
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)    return 1;
        int ans=10;
        int available=9,unique=9;
        for(int i=2;i<=n;i++){
            unique*=available;
            ans+=unique;
            available--;
        }
        return ans;
    }
};