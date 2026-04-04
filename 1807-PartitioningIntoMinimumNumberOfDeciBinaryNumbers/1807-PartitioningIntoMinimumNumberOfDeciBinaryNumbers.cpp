// Last updated: 4/4/2026, 11:01:44 PM
class Solution {
public:
    int minPartitions(string n) {

        int md=0;
        for(char c:n){
            md=max(md,c-'0');
        }
        return md;
    }
};