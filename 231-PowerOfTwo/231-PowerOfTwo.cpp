// Last updated: 4/4/2026, 11:05:41 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)    return false;
        
        return (! (n&(n-1)));
    }
};