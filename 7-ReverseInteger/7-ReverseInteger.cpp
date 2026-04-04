// Last updated: 4/4/2026, 11:08:03 PM
class Solution {
public:
    int reverse(int x) {
        int rev=0;
        
        
        while(x){
            int d=x%10;
            if(rev<INT_MIN/10 || rev >INT_MAX/10) return 0;
            rev=(rev*10)+d;
            x/=10;
        }
        return rev;
    }
};