// Last updated: 4/4/2026, 11:05:58 PM
class Solution {
public:
    bool isHappy(int n) {
        int s=n;
        int f=n;
        do{
            s=findsquare(s);
            f=findsquare(findsquare(f));
        }while(s!=f);
        return (s==1);
    }
    int findsquare(int n){
        int sum=0;
        while(n!=0){
            int rem=n%10;
            sum+=(rem*rem);
            n/=10;
        }
        return sum;
    }
};