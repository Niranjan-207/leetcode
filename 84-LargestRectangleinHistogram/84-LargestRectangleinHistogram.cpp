// Last updated: 5/6/2026, 12:18:25 PM
1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4        int n=heights.size();
5        vector<int> ns(n),ps(n);
6
7        stack<int> st;
8
9        for(int i=n-1;i>=0;i--){
10            while(!st.empty() && heights[i]<=heights[st.top()]){
11                st.pop();
12            }
13            if(st.empty())  ns[i]=n;
14            else    ns[i]=st.top();
15            st.push(i);
16        }
17
18        st = stack<int>();
19        for(int i=0;i<n;i++){
20            while(!st.empty() && heights[i]<=heights[st.top()]){
21                st.pop();
22            }
23            if(st.empty())  ps[i]=-1;
24            else    ps[i]=st.top();
25            st.push(i);
26        }
27
28        int maans=INT_MIN;
29        for(int i=0;i<n;i++){
30            maans=max(maans,(ns[i]-ps[i]-1)*heights[i]);
31        }
32        return maans;
33    }
34};