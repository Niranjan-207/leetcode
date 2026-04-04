// Last updated: 4/4/2026, 10:57:57 PM
class Solution {
public:
    long long lastInteger(long long n) {
        long long s=1;
        long long rem=n;
        long long inc=1;
        bool lef=true;
        while(rem>1){
            if(lef){}
            else{
                if(rem%2==0)
                    s+=inc;
            }
            rem=(rem+1)/2;
            inc*=2;
            lef=!lef;
        }
        return s;
    }
};