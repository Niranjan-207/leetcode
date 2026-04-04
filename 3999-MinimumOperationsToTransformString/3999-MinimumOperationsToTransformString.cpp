// Last updated: 4/4/2026, 10:59:11 PM
class Solution {
public:
    int minOperations(string s) {
        int cnt=0;

        for(char c:s){
            int st=(26-(c-'a'))%26;
            cnt=max(cnt,st);
        }
        return cnt;
    }
};