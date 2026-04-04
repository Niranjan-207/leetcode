// Last updated: 4/4/2026, 11:03:00 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        stack<char> st;
        for(char c:s){
            if(c=='('){
                if(!st.empty()){
                    ans+=c;
                }st.push(c);
            }
            else if(c==')'){
                st.pop();
                if(!st.empty()){
                    ans+=c;
                }
            }
        }
        return ans;
    }
};