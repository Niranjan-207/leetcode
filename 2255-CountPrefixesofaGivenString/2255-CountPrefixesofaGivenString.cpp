// Last updated: 4/18/2026, 10:35:38 PM
1class Solution {
2public:
3    int countPrefixes(vector<string>& words, string s) {
4        unordered_map<string,int> mp;
5        string temp="";
6        for(string word:words){
7            mp[word]++;
8        }
9        int cnt=0;
10        temp="";
11        for(char c:s){
12            temp+=c;
13            if(mp.count(temp))  cnt+=mp[temp];
14        }
15        return cnt;
16    }
17};