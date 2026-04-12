// Last updated: 4/12/2026, 7:39:00 AM
1class Solution {
2public:
3    int countDigitOccurrences(vector<int>& nums, int digit) {
4        int cnt=0;
5        for(int num:nums){
6            while(num>0){
7                int dig=num%10;
8                if(dig==digit)  cnt++;
9                num/=10;
10            }
11        }
12        return cnt;
13    }
14};