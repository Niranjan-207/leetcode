// Last updated: 4/4/2026, 11:00:58 PM
class Solution {
public:
    long long neg(long long num){
        num=abs(num);
        string s=to_string(num);
        sort(rbegin(s),rend(s));
        num=stoll(s);
        return (-1*num);
    }
    long long pos(long long num){
        int zc=0;
        string s=to_string(num);
        for(char c:s)   if(c=='0')  zc++;
        sort(begin(s),end(s));
        num=stoll(s);
        s=to_string(num);
        string result = s[0] + string(zc, '0') + s.substr(1);
        return stoll(result);
       
    }
    long long smallestNumber(long long num) {
        if(num==0)  return 0;
        if(num<0){
            return neg(num);
        }
        return pos(num);
    }
};