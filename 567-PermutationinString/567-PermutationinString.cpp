// Last updated: 6/30/2026, 12:09:49 PM
1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4        int n=s1.length(),m=s2.length();
5        if(n>m) return false;
6
7        vector<int> s1f(26,0),s2f(26,0);
8        for(int i=0;i<n;i++){
9            s1f[s1[i]-'a']++;
10            s2f[s2[i]-'a']++;
11        }
12        
13        
14        if(s1f==s2f)    return true;
15
16         for(int i=n;i<m;i++){
17            s2f[s2[i]-'a']++;
18            s2f[s2[i-n]-'a']--;
19
20        
21            if(s1f==s2f)    return true;
22         }
23        
24        return false;
25
26    }
27};