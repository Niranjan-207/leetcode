// Last updated: 4/4/2026, 11:05:46 PM
class Solution {
    public boolean isPowerOfTwo(int n) {
        if(n<=0) return false;
        int ans=n&(n-1);
        return ans == 0;
    }
}