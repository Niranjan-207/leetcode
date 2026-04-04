// Last updated: 4/4/2026, 11:06:15 PM
class Solution {
public:
    string convertToTitle(int columnNumber) {
       string s="";
       while(columnNumber>0){
        columnNumber--;
        int cur=columnNumber%26;
        columnNumber/=26;
        s+=(cur+'A');
       }
       reverse(begin(s),end(s));
       return  s;
    }
};