// Last updated: 4/4/2026, 11:01:21 PM
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mi,ma;
        mi=*min_element(begin(nums),end(nums));
        ma=*max_element(begin(nums),end(nums));
        return gcd(mi,ma);
    }
};