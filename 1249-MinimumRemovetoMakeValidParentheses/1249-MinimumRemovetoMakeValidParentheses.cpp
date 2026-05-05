// Last updated: 5/5/2026, 11:35:22 AM
1class Solution {
2public:
3    string minRemoveToMakeValid(string s) {
4        stack<int> st;
5        for(int i=0;i<s.length();i++){
6            char& c=s[i];
7            if(c=='(')  st.push(i);
8            else if(c==')'){
9                if(st.empty())  st.push(i);
10                else{
11                    char& to=s[st.top()];
12                    if(c==')' && to=='(')   st.pop();
13                    else    st.push(i);
14                }
15            }
16        }
17        if(st.empty())  return s;
18        string ans="";
19        for(int i=s.length()-1;i>=0;i--){
20            if(!st.empty() && i==st.top()){
21                st.pop();
22            }else{
23                ans+=s[i];
24            }
25        }
26        reverse(begin(ans),end(ans));
27        return ans;
28    }
29};