// Last updated: 6/30/2026, 12:39:17 AM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& t) {
4        int n=t.size();
5        stack<int> st;
6        vector<int> ans(n);
7        for(int i=n-1;i>=0;i--){
8            while(!st.empty() && t[st.top()]<=t[i])  st.pop();
9            if(st.size()==0){
10                ans[i]=0;
11            }else{
12                ans[i]=st.top()-i;
13            }
14            st.push(i);
15            
16        }
17        return ans;
18    }
19};