// Last updated: 4/4/2026, 10:57:43 PM
class Solution {
public:
    int countMonobit(int n) {
        int cnt=1;
        int cur=1;
        while(cur<=n){
            cnt++;
            cur=(cur<<1)|1;
        }
        return cnt;
    }
};