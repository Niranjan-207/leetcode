// Last updated: 4/4/2026, 10:58:32 PM
class Solution {
public:
    int maxDistinct(string s) {
        set<int> se;
        int cnt=0;
        for(char c:s){
            if(se.find(c)==se.end()){
                cnt++;
                se.insert(c);
            }
        }
        return cnt;
    }
};