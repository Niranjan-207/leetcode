// Last updated: 5/2/2026, 2:21:37 PM
#include <bitset>
#include <numeric>

static const int speedup = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total_sum = accumulate(nums.begin(), nums.end(), 0);
        
        // If the total sum is odd, we cannot split it into two equal integer sums
        if (total_sum % 2 != 0) return false;
        
        int target = total_sum / 2;
        
        // Constraints: nums.length <= 200, nums[i] <= 100. 
        // Max target sum = (200 * 100) / 2 = 10000.
        bitset<10001> dp;
        dp[0] = 1; // Base case: a sum of 0 is always possible
        
        for (int num : nums) {
            // Left shift the bitset by 'num' and OR it with the original
            // This marks all new possible sums reachable by adding 'num'
            dp |= (dp << num);
            
            // Early exit if we already reached the target
            if (dp[target]) return true;
        }
        
        return dp[target];
    }
};