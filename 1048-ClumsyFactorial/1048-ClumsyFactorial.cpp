// Last updated: 4/4/2026, 11:03:06 PM
class Solution {
public:
    int eval(string s){
        stack<int> st;
        int num=0;
        char op='+';
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(isdigit(c)){
                num = num*10+(c-'0');
            }
            if(!isdigit(c) || i==s.length()-1){
                if(op=='+'){
                    st.push(num);
                }else if(op=='-'){
                    st.push(-num);
                }else if(op=='*'){
                    int t=st.top();
                    st.pop();

                    st.push(t*num);
                }else{
                    int t=st.top();
                    st.pop();

                    st.push(t/num);
                }
                op=c;
                num=0;
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }

    int clumsy(int n) {
        string s="*/+-";
        string  ans=to_string(n);
        int idx=0;
        for(int i=n-1;i>0;i--){
            ans+=s[idx%4];
            ans+=to_string(i);
            idx++;
        }
        //cout<<ans;
        return eval(ans);
        
    }
};
