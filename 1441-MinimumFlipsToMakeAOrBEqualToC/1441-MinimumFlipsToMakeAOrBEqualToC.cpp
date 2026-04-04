// Last updated: 4/4/2026, 11:02:29 PM
class Solution {
public:
    int minFlips(int a, int b, int c) {
        if((a|b) == c)    return 0;
        int cnt=0;
        for(int i=0;i<32;i++){
            int x=(a>>i)&1,y=(b>>i)&1,z=(c>>i)&1;
            if((x|y)==z)    continue;
            
            if(x+y==0 && z==1)  cnt++;
            else if((x+y == 2) && z==0)    cnt+=2;
            else if((x+y==1) && z==0)   cnt++;    
        }
        return cnt;
    }
};