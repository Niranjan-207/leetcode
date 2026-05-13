// Last updated: 5/14/2026, 12:45:53 AM
1class Solution {
2public:
3    int minMoves(vector<int>& nums, int limit) {
4        int n = nums.size();
5        vector<int> dp(2 * limit + 2, 0);
6        for (int i = 0; i < n / 2; i++) {
7            int mini = min(nums[i], nums[n - 1 - i]);
8            int maxi = max(nums[i], nums[n - 1 - i]);
9            dp[2] += 2;
10            dp[mini + 1] -= 1;
11            dp[mini + maxi] -= 1;
12            dp[mini + maxi + 1] += 1;
13            dp[maxi + limit + 1] += 1;
14        }
15        int res = n;
16        int moves = 0;
17        for (int c = 2; c <= 2 * limit; c++) {
18            moves += dp[c];
19            res = min(res, moves);
20        }
21
22        return res;
23    }
24};