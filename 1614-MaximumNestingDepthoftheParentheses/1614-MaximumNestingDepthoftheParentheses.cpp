// Last updated: 5/5/2026, 10:37:02 AM
1class Solution {
2public:
3    int minAddToMakeValid(string s) {
4        stack<char> st;
5        for(char c:s){
6            if(c=='(')  st.push(c);
7            else{
8                if(st.empty())  st.push(c);
9                else{
10                    char to=st.top();
11                    if(c==')'  && to=='('){
12                        st.pop();
13                    }else{
14                        st.push(c);
15                    }
16                }
17            }
18        }
19        return st.size();
20    }
21};