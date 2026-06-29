// Last updated: 6/30/2026, 1:18:16 AM
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> st;
5        for(string c:tokens){
6            if(c=="+"){
7                int num1=st.top();st.pop();
8                int num2=st.top();st.pop();
9                st.push(num1+num2);
10            }else if(c=="-"){
11                int num1=st.top();st.pop();
12                int num2=st.top();st.pop();
13                st.push(num2-num1);
14            }else if(c=="*"){
15                int num1=st.top();st.pop();
16                int num2=st.top();st.pop();
17                st.push(num1*num2);
18            }else if(c=="/"){
19                int num1=st.top();st.pop();
20                int num2=st.top();st.pop();
21                st.push(num2/num1);
22            }else{
23                st.push(stoi(c));
24            }
25        }
26        return st.top();
27    }
28};