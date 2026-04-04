// Last updated: 4/4/2026, 10:58:30 PM
class Solution {
public:
    int minLengthAfterRemovals(string s) {
        stack<char> st;
        for(char c : s ){
            if(st.empty()){
                st.push(c);
            }else if(st.top()!=c){
                st.pop();
            }else{
                st.push(c);
            }
        }
        return st.size();
    }
};