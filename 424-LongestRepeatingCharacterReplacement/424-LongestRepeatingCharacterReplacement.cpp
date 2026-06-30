// Last updated: 6/30/2026, 12:25:41 PM
1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        int n=s.length();
5        unordered_map<char,int> mp;
6        int l=0;
7        int mf=0;
8        int ans=0;
9        for(int r=0;r<n;r++){
10            mp[s[r]]++;
11            mf=max(mf,mp[s[r]]);
12            while((r-l+1)-mf > k){
13                mp[s[l]]--;
14                l++;
15            }
16            ans=max(ans,r-l+1);
17        }
18        return ans;
19    }
20};