// Last updated: 4/18/2026, 10:14:30 PM
1class Solution {
2public:
3    vector<int> getOrder(vector<vector<int>>& tasks) {
4        int n=tasks.size();
5        vector<vector<int>> arr;
6        for(int i=0;i<n;i++)    arr.push_back({tasks[i][0],tasks[i][1],i});
7        sort(begin(arr),end(arr));
8
9        priority_queue<
10            pair<int,int>,
11            vector<pair<int,int>>,
12            greater<pair<int,int>>
13        > pq;
14        vector<int> ans;
15
16        int idx=0;
17        long long ctim=0;
18        
19        while(idx<n || !pq.empty()){
20            if(pq.empty() && ctim<arr[idx][0]){
21                ctim=arr[idx][0];
22            }
23            
24            while(idx<n && arr[idx][0]<=ctim){
25                pq.push({arr[idx][1],arr[idx][2]});
26                idx++;
27            }
28            auto [processTime,pidx]=pq.top();
29            pq.pop();
30
31            ctim+=processTime;
32            ans.push_back(pidx);
33        }
34        return ans;
35    }
36};