// Last updated: 5/12/2026, 11:24:07 PM
1class Solution {
2public:
3    static bool cmp(vector<int>& a,vector<int>& b){
4        return (b[1]-b[0])<(a[1]-a[0]);
5    }
6
7    bool pos(int energy,vector<vector<int>>& tasks){
8        for(vector<int>& task:tasks){
9            if(energy<task[1])  return false;
10            energy-=task[0];
11        }
12        return true;
13    }
14
15    int minimumEffort(vector<vector<int>>& tasks) {
16        sort(begin(tasks),end(tasks),cmp);
17        int lo=0;
18        int hi=0;
19        for(vector<int> task:tasks){
20            lo=min(lo,task[1]);
21            hi+=task[1];
22        }
23        int ans=0;
24        while(lo<=hi){
25            int mid=lo+(hi-lo)/2;
26            if(pos(mid,tasks)){
27                ans=mid;
28                hi=mid-1;
29            }else{
30                lo=mid+1;
31            }
32        }
33        return ans;
34    }
35};