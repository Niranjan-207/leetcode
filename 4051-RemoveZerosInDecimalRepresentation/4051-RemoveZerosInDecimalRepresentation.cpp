// Last updated: 4/4/2026, 10:58:53 PM
class Solution {
public:
    long long removeZeros(long long n) {
        string ans="";
        string an=to_string(n);
       
        for(char& c: an){
            if(c!='0')  ans+=c;
        }
        
        long long num=stoll(ans);
        return num;
    }
};