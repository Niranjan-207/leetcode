// Last updated: 5/5/2026, 10:10:48 AM
1class Solution {
2public:
3    int maxDepth(string s) {
4        stack<char> st;
5        int len=0;
6        for(char& c:s){
7            if(c=='(')  st.push(c);
8            else if(c==')'){
9                int clen=st.size();
10                len=max(len,clen);
11                st.pop();
12            }
13        }
14        return len;
15    }
16};