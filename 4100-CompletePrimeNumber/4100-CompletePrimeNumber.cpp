// Last updated: 4/4/2026, 10:58:25 PM
class Solution {
public:
    bool isPrime(long long num){
        if(num<=1) return false;
        if(num<=3) return true;
        if(num%2==0 || num%3==0) return false;
        for(long long i=5;(i*i)<=num;i+=6){
            if(num%i==0 || (num)%(i+2)==0) return false;
        }
        return true;
    }
    
    bool completePrime(long long num) {
        string s=to_string(num);
        long long pre=0;
        for(long long i=0;i<s.length();i++){
            long long dig=s[i]-'0';
            pre=(pre*10)+dig;
            if(!isPrime(pre)) return false;
        }
        long long suf=0;
        long long mul=1;
        for(long long i=s.length()-1;i>=0;i--){
            long long dig=s[i]-'0';
            suf=(dig*mul)+suf;
            if(!isPrime(suf)) return false;
            mul*=10;
        }
        return true;
    }
};