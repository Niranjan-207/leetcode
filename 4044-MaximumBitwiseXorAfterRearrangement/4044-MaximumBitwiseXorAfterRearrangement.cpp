// Last updated: 4/4/2026, 10:58:55 PM
class Solution {
public:
    string maximumXor(string s, string t) {
        int n=s.length();
        vector<char> rt(n,'0');
        int c1=0;
        for(char c:t) if(c=='1') c1++;
        
        for(int i=0;i<n;i++){
            if(s[i]=='0' && c1!=0){
                rt[i]='1';
                c1--;
            }
        }
        for(int i=(n-1);i>=0;i--){
            if(c1==0) break;
            if(rt[i]!='1'){ rt[i]='1';c1--;}
        }
        string ans="";

        for(int i=0;i<n;i++){
            if(s[i]==rt[i]){
                ans+='0';
            }else{
                ans+='1';
            }
        }
        return ans;
    }
};