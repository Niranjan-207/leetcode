// Last updated: 4/4/2026, 10:59:35 PM
class Solution {
public:
    int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
        int len=original.size();
        long long least= bounds[0][0], highest= bounds[0][1];

    for (int i = 1; i < len; i++) {
        long long d = original[i] - original[i - 1];
        least = max((long long)bounds[i][0], least + d);//highest possible no.
        highest = min((long long)bounds[i][1], highest + d);//lowest possible no.
        if (least > highest) return 0;
    }
    return highest - least + 1;
    }
};