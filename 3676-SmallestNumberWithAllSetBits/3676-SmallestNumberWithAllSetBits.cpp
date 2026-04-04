// Last updated: 4/4/2026, 10:59:44 PM
class Solution {
public:
    int smallestNumber(int n) {
        if(n==1)    return 1;
        if(n&(n-1)==0)  return (n*2);
        int ans=1;
        int mul=1;
        while(n>0){
            ans+=mul;
            mul*=2;
            n>>=1;
        }
        return (ans-1);
    }
};