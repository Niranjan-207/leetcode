// Last updated: 4/4/2026, 11:05:11 PM
class Solution {
    public boolean isPowerOfFour(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        return (n%4==0) && isPowerOfFour(n/4);
    }
}