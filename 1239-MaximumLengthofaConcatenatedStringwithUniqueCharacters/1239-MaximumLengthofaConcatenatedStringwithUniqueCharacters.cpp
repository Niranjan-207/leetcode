// Last updated: 5/6/2026, 12:27:24 AM
1class Solution {
2public:
3    unordered_map<long long,int> dp;
4    int solve(int idx,vector<int>& masks,int cmask){
5
6        long long key=((long long)idx<<32)|cmask;
7        if(dp.count(key))   return dp[key];
8        
9        int ans=__builtin_popcount(cmask);
10        for(int i=idx;i<masks.size();i++){
11            if((cmask & masks[i])==0) ans=max(ans,solve(i+1,masks,cmask|masks[i]));
12        }
13        return dp[key]=ans;
14    }
15
16    int maxLength(vector<string>& arr) {
17        vector<int> masks;
18        for(string s:arr){
19            int mask=0;
20            bool valid=true;
21            for(char c:s){
22                int dig=c-'a';
23                if(mask&(1<<dig)){
24                    valid=false;
25                    break;
26                }  
27                mask|=(1<<dig);
28            }
29            if(valid)   masks.push_back(mask);
30        }
31        return solve(0,masks,0);
32        
33    }
34};