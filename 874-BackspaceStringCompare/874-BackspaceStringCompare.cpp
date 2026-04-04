// Last updated: 4/4/2026, 11:03:39 PM
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> con1;
        for(char c:s){
            if(c=='#'){
                if(!con1.empty()){
                    con1.pop();
                }
            }else{
                con1.push(c);
            }
        }
        stack<char> con2;
        for(char c:t){
            if(c=='#'){
                if(!con2.empty()){
                    con2.pop();
                }
            }else{
                con2.push(c);
            }
        }
        while(!con1.empty() && !con2.empty()){
            if(con1.top()==con2.top()){
                con1.pop();
                con2.pop();
            }else{
                return false;
            }
        }
        return con1.empty() && con2.empty();
    }
};