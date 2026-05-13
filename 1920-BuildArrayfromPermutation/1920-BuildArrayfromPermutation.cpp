// Last updated: 5/14/2026, 12:15:22 AM
1class Solution {
2public:
3    bool carPooling(vector<vector<int>>& trips, int capacity) {
4        map<int,int> mp;
5        for(vector<int>& trip:trips){
6            int n=trip[0],l=trip[1],r=trip[2];
7            mp[l]+=n;
8            mp[r]-=n;
9        }
10        int cap=0;
11        for(auto& [ran,delta]:mp){
12            cap+=delta;
13            if(cap>capacity)    return false;
14        }
15        return true;
16    }
17};