// Last updated: 4/4/2026, 11:08:05 PM
class Solution {
public:
    string check(int l,int r,string& s){
        while(l>=0 && r<s.length() &&s[l]==s[r]){
            l--;r++;
        }
        return s.substr(l+1,r-l-1);
    }
    string longestPalindrome(string s) {
        int n=s.length();
        
        string ans="";
        for(int i=0;i<n;i++){
            string temp=check(i,i,s);
            
            if(ans.length()<temp.length()){
                ans=temp;
            }
            temp=check(i,i+1,s);
            if(ans.length()<temp.length()){
                ans=temp;
            }
        }
        return ans;
    }
    
};