// Last updated: 5/5/2026, 10:09:47 PM
1class Solution {
2public:
3   
4   
5    int f(int idx,int& n,vector<int>& arr,int d,vector<vector<int>>& dp){
6       if(d==1){
7            return *max_element(begin(arr)+idx,end(arr));
8       }
9        if(dp[idx][d]!=-1)  return dp[idx][d];
10       int finalValue=INT_MAX;
11       int curMax=INT_MIN;
12       for(int i=idx;i<=n-d;i++){
13        curMax=max(curMax,arr[i]);
14        int segAns=curMax+f(i+1,n,arr,d-1,dp);
15        finalValue=min(finalValue,segAns);
16       }
17       return dp[idx][d]=finalValue;
18    }
19
20    int minDifficulty(vector<int>& jobDifficulty, int d) {
21        int n=jobDifficulty.size();
22        if(n<d) return -1;
23        if(n==d)    return accumulate(begin(jobDifficulty),end(jobDifficulty),0);
24        vector<vector<int>> dp(n,vector<int>(d+1,-1));
25        return f(0,n,jobDifficulty,d,dp);   //idx,arr,cd,d    
26    }
27};