// Last updated: 6/30/2026, 12:05:15 PM
1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4        
5        int n=s1.length();
6        int m=s2.length();
7        if(m<n) return false;
8
9        vector<int> f1(26,0),f2(26,0);
10        for(char c:s1){
11            f1[c-'a']++;
12        }
13        int i=0;
14        while(i<n){
15            f2[s2[i]-'a']++;
16            i++;
17        }
18        if(f1==f2)  return true;
19        for(;i<m;i++){
20            f2[s2[i-n]-'a']--;
21            f2[s2[i]-'a']++;
22            if(f1==f2)  return true;
23        }
24        return false;
25    }
26};