// Last updated: 4/18/2026, 6:04:50 PM
1class Solution {
2public:
3    int mirrorDistance(int n) {
4        string s=to_string(n);
5        reverse(begin(s),end(s));
6        int num=stoi(s);
7
8        return abs(num-n);
9    }
10};