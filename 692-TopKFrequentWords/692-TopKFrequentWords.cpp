// Last updated: 5/9/2026, 12:45:26 PM
1class Solution {
2public:
3    static bool cmp(pair<int,string> a,pair<int,string> b){
4        if(a.first==b.first){
5            return a.second<b.second;
6        }
7        return a.first>b.first;
8    }
9
10    vector<string> topKFrequent(vector<string>& words, int k) {
11        unordered_map<string,int> mp;
12        for(string s:words){
13            mp[s]++;
14        }
15        vector<pair<int,string>> arr;
16        for(auto& [word,cnt]:mp){
17            arr.push_back({cnt,word});
18        }
19
20        sort(begin(arr),end(arr),cmp);
21        vector<string> ans;
22        for(int i=0;i<k;i++)    ans.push_back(arr[i].second);
23        return ans;
24    }
25
26};