// Last updated: 5/14/2026, 6:25:36 PM
1class Solution {
2public:
3    
4
5    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
6        int mod=1e9+7;
7        int n=nums.size();
8        vector<int> fre(n);
9        for(vector<int> request:requests){
10            fre[request[0]]+=1;
11            if(request[1]+1<n){
12                fre[request[1]+1]-=1;
13            }
14        }
15        sort(rbegin(nums),rend(nums));
16        for(int i=1;i<n;i++){
17            fre[i]=fre[i-1]+fre[i];
18        }
19        sort(rbegin(fre),rend(fre));
20        long long sum=0;
21
22        for(int i=0;i<n;i++){
23            sum=(sum+(fre[i]*1ll*nums[i])%mod)%mod;
24        }
25
26        return (int)sum;
27        
28    }
29};