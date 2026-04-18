// Last updated: 4/18/2026, 10:42:07 PM
1class Solution {
2public:
3    int prefixCount(vector<string>& words, string pref) {
4        int cnt=0;
5        for(string& word:words){
6            if(word.length()>=pref.length() && word.compare(0,pref.length(),pref)==0)   cnt++;
7        }
8        return cnt;
9    }
10};