// Last updated: 4/4/2026, 10:58:03 PM
class Solution {
public:
    bool check(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
    
    string reverseWords(string s) {
        if(s=="") return "";
        int n=s.length();
        //string ans=0;
        int cnt=0;
        int i=0;
        while(i<n && s[i]!=' '){
            if(check(s[i])) cnt++;
            i++;
        }
        for(;i<n;i++){
            while(i<n && s[i]==' ') i++;
            
            int wcnt=0;
            int idx=i;
            while(i<n && s[i]!=' '){
                if(check(s[i])) wcnt++;
                i++;
            }
            if(cnt==wcnt){
                reverse(s.begin()+idx,s.begin()+(i));
            }
        }
        return s;
    }
};