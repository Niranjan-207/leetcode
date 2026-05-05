// Last updated: 5/5/2026, 9:06:29 PM
1class Solution {
2public:
3    unordered_map<string,int> dp;
4    string encode(int idx,int ma,int cd){
5        return (to_string(idx)+'#'+to_string(ma)+'#'+to_string(cd));
6    }
7    int f(int idx,int ma,vector<int>& arr,int cd,int d){
8        if(cd>d)    return 1e9;
9        if(idx==arr.size() && cd==d)    return ma;
10        if(idx==arr.size()) return 1e9;
11
12        string key=encode(idx,ma,cd);
13        if(dp.count(key)) return dp[key];
14        int newDay=ma+f(idx+1,arr[idx],arr,cd+1,d);
15        int sameDay=f(idx+1,max(ma,arr[idx]),arr,cd,d);
16        return dp[key]=min(newDay,sameDay);
17    }
18
19    int minDifficulty(vector<int>& jobDifficulty, int d) {
20        int n=jobDifficulty.size();
21        if(n<d) return -1;
22        if(n==d)    return accumulate(begin(jobDifficulty),end(jobDifficulty),0);
23        
24        return f(1,jobDifficulty[0],jobDifficulty,1,d);   //idx,max,arr,cd,d    
25    }
26};