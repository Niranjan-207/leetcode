// Last updated: 4/4/2026, 11:04:59 PM
class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        for(auto c:s){
            if(c!=']')  st.push(string(1,c));
            else{
                string temp="";
                while(st.top()!="["){
                    string bef=st.top();
                    temp=bef+temp;
                    st.pop();
                }
                st.pop();
                string num="";
                while(!st.empty() && isdigit(st.top()[0])){
                    string bef=st.top();
                    num=bef+num;
                    st.pop();
                }
                int n=stoi(num);
                string word="";
                for(int i=0;i<n;i++){
                    word+=temp;
                }
                st.push(word);
            }
        }
        string word="";
        while(!st.empty()){
            string temp=st.top();
            word=temp+word;
            st.pop();
        }
        
        return word;
    }
};