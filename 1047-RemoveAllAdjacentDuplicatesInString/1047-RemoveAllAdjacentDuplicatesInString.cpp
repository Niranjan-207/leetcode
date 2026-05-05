// Last updated: 5/5/2026, 12:00:38 PM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        stack<char> st;
5        for(char c:s){
6            if(st.empty())  st.push(c);
7            else{
8                if(st.top()==c) st.pop();
9                else    st.push(c);
10            }
11        }
12        string ans="";
13        while(!st.empty()){
14            ans+=st.top();
15            st.pop();
16        }
17        reverse(begin(ans),end(ans));
18        return ans;
19    }
20};