// Last updated: 4/4/2026, 11:07:47 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
        // string s;
        // int m=needle.length();
        // int i=0;
        // for(char c: haystack){
        //     s+=c;i++;
        //     if(s.length()>=m && s.substr(s.length()-m)==needle) return (i-m);
        // }
        // return -1;
    }
};