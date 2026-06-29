// Last updated: 6/29/2026, 3:56:24 PM
1class Solution {
2public:
3    int numOfStrings(vector<string>& patterns, string word) {
4        int cnt=0;
5        for(string& s : patterns){
6            if(word.find(s)!=string::npos) cnt++;
7        }
8        return cnt;
9    }
10};