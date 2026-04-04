// Last updated: 4/4/2026, 10:58:15 PM
class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long dig=0;

        string s=to_string(n);
        for(char c: s){
            int d=c-'0';
            if(d!=0){
                dig=(1ll*dig*10)+d;
                sum+=d;
            }
        }
        return (dig*sum);
    }
};