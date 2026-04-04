// Last updated: 4/4/2026, 11:00:40 PM
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n&1)    return 2*n;
        return n;

    }
};