// Last updated: 4/4/2026, 11:03:24 PM
class Solution {
public:
    bool isChar(char ch){
        if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)) return true;
        return false;
    }
    string reverseOnlyLetters(string s) {
        int p1=0;
        int p2=s.length()-1;
        while(p1<p2){
            while(p1<p2 && isChar(s[p1])==false)    p1++;
            while(p1<p2 && isChar(s[p2])==false)    p2--;
            if(p1<p2 && isChar(s[p1]) && isChar(s[p2]))  swap(s[p1++],s[p2--]);
        }
        return s;
    }
};