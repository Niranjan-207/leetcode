// Last updated: 4/4/2026, 11:02:55 PM
class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()==0 || s.size()==1){
            return s;
        }
        stack<char> con;
        for(char c:s){
            if(con.empty()){
                con.push(c);
            }
            else if(con.top()==c ){
                con.pop();
            }else{
                con.push(c);
            }
        }
        string ans="";
        while(!con.empty()){
            ans.push_back(con.top());
            con.pop();
        }
        for(int i=0;i<ans.size()/2;i++){
            char temp=ans[i];
            ans[i]=ans[ans.size()-i-1];
            ans[ans.size()-i-1]=temp;
        }
        return ans;
    }
};