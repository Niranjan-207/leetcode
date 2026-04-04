// Last updated: 4/4/2026, 10:59:18 PM
class Solution {
public:
    string concatHex36(int n) {
        int n2=n*n;
        int n3=n*n*n;
        string s1="";
        string chars="0123456789ABCDEF";
        while(n2>0){
            s1+=(chars[n2%16]);
            n2/=16;
        }
        reverse(s1.begin(),s1.end());
        chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string s2="";
        while(n3>0){
            s2+=(chars[n3%36]);
            n3/=36;
        }
        reverse(s2.begin(),s2.end());
        return (s1+s2);
    }
};