// Last updated: 4/4/2026, 11:00:18 PM
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,u=0;
        for(char& c: moves){
            if(c=='L')  l++;
            else if(c=='R') r++;
            else u++;
        }
        return (abs(l-r)+u);
    }
};