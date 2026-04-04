// Last updated: 4/4/2026, 11:06:23 PM
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for(string& c:tokens){
            if(c=="+" || c=="-" || c=="*" || c=="/"){
                long long b=st.top();st.pop();
                long long a=st.top();st.pop();
                long long result=0;
                if(c=="+"){
                    result=a+b;
                }else if(c=="-"){
                    result=a-b;
                }else if(c=="/"){
                    result=a/b;
                }else{
                    result=a*b;
                }
                st.push(result);
            }else{
                st.push(stoll(c));
            }
        }
        return st.top();
    }
};