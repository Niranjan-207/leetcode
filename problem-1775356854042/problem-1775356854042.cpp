// Last updated: 4/5/2026, 8:10:54 AM
1class Solution {
2public:
3    int mirrorFrequency(string s) {
4        map<char,int> mp;
5        for(char c:s) mp[c]++;
6
7        set<char> se;
8        int ans=0;
9        for(char c:s){
10            char mi;
11            if(se.find(c)!=se.end()) continue;
12            if(c>='a' && c<='z'){
13                mi='a'+('z'-c);
14            }else{
15                mi='0'+('9'-c);
16            }
17            ans+=abs(mp[c]-mp[mi]);
18            se.insert(c);
19            se.insert(mi);
20        }
21        return ans;
22    }
23};