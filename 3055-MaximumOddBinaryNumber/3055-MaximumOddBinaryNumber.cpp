// Last updated: 4/4/2026, 11:00:16 PM
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c1=0,c0=0;
        for(char c:s){
            if(c=='0')  c0++;
            else    c1++;
        }
        string ans="1";
        c1--;
        while(c0>0){
            ans="0"+ans;
            c0--;
        }
        while(c1>0){
            ans="1"+ans;
            c1--;
        }
        return ans;
    }
};