// Last updated: 4/18/2026, 10:38:50 PM
1class Solution {
2public:
3    int countPrefixes(vector<string>& words, string s) {
4        int cnt=0;
5        for(string& word:words){
6            if(s.length()>=word.length() && s.compare(0,word.size(),word)==0){
7                cnt++;
8            }
9        }
10        return cnt;
11    }
12};