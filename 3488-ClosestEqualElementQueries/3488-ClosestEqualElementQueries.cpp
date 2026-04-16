// Last updated: 4/16/2026, 10:47:27 AM
1class Solution {
2public:
3    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
4        int n=nums.size();
5        unordered_map<int,vector<int>> mp;
6        for(int i=0;i<n;i++){
7            mp[nums[i]].push_back(i);
8        }
9
10        vector<int> pre(n);
11        for(auto& [num,list]:mp){
12            int m=list.size();
13            if(m==1){
14                pre[list[0]]=-1;
15                continue;
16            }
17
18            for(int i=0;i<m;i++){
19                int cur=list[i];
20
21                int prev=list[(i-1+m)%m];
22                int next=list[(i+1)%m];
23
24                int pdif=abs(cur-prev);
25                pdif=min(pdif,n-pdif);
26
27                int ndif=abs(cur-next);
28                ndif=min(ndif,n-ndif);
29
30                pre[cur]=min(pdif,ndif);
31            }
32        }
33
34        vector<int> ans;
35        for(int q:queries){
36            ans.push_back(pre[q]);
37        }
38        return ans;
39
40    }
41};