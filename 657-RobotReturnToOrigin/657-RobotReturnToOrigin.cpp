// Last updated: 4/4/2026, 11:04:18 PM
class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0,d=0,r=0,l=0;
        for(char& c:moves){
            if(c=='U')  u++;
            else if(c=='D') d++;
            else if(c=='L') l++;
            else    r++;
        }

        return (u==d && l==r);
    }
};