// Last updated: 5/3/2026, 7:07:21 PM
1class Solution {
2public:
3    int n;
4
5    int f(int idx,vector<int>& arr,int k,vector<int>& dp){
6        if(idx>=n)  return 0;
7        if(dp[idx]!=-1) return dp[idx];
8        int ma=INT_MIN;
9        int mele=0;
10        for(int tk=1;tk<=k && idx+tk<=n;tk++){
11            mele=max(mele,arr[idx+tk-1]);
12
13            int cur=mele*tk+f(idx+tk,arr,k,dp);
14            ma=max(cur,ma);
15        }
16        return dp[idx]=ma;
17    }
18
19    int maxSumAfterPartitioning(vector<int>& arr, int k) {
20        n=arr.size();
21        vector<int> dp(n,-1);
22        return f(0,arr,k,dp);
23    }
24};