// Last updated: 6/29/2026, 11:27:27 PM
class Solution {
public:
    static constexpr int MAX_RANGE = 16 << 20;
    int solvewithSet(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int best = 0;
        for (int n : s) {
            if (s.count(n - 1))
                continue;
            int len = 1;
            while (s.count(n + len))
                len++;
            best = max(best, len);
        }
        return best;
    }
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;
        int mn = INT_MAX, mx = INT_MIN;
        for (int n : nums) {
            mn = min(n, mn);
            mx = max(n, mx);
        }
        int r = mx - mn + 1;
        if (r > MAX_RANGE) {
            return solvewithSet(nums);
        }
        vector<bool> seen(r, false);
        for (int n : nums) {
            seen[n - mn] = true;
        }
        int cur = 0, best = 0;
        for (int i = 0; i < r; i++) {
            if (seen[i])
                best = max(best, ++cur);
            else
                cur = 0;
        }
        return best;
    }
};