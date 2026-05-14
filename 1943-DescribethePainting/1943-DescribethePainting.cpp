// Last updated: 5/14/2026, 12:25:29 PM
1class Solution {
2public:
3    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
4        vector<vector<long long>> ans;
5        map<int,long long> mp;
6        int st=INT_MAX;;
7        for(auto& segment:segments){
8            st=min(st,segment[0]);
9            mp[segment[0]]+=segment[2];
10            mp[segment[1]]-=segment[2];
11        }
12
13        
14        long long clr=mp[st];
15        mp.erase(st);
16        for(auto& [seg,delta]:mp){
17            if(clr!=0) ans.push_back({st,seg,clr});
18            st=seg;
19            clr+=delta;
20        }
21        return ans;
22    }
23};