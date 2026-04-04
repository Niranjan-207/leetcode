// Last updated: 4/4/2026, 11:00:53 PM
class Solution {
public:
    int countCollisions(string directions) {
        int col=0;
        stack<char> st;
        for(char&c: directions){
            if(c=='S'){
                while(!st.empty() && st.top()=='R'){
                    col++;
                    st.pop();
                }
                st.push(c);
            }else if(c=='R'){
                st.push('R');
            }else{  //L
                if(st.empty()){
                    st.push('L');
                    continue;
                }
                if(st.top()=='R'){
                    col+=2;
                    st.pop();
                    while(!st.empty() && st.top()=='R'){
                        col++;
                        st.pop();
                    }
                    st.push('S');
                }else if(st.top()=='S'){
                    col++;
                }
                

            }
        }
        return col;
    }
};