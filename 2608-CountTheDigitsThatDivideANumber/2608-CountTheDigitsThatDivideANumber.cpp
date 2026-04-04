// Last updated: 4/4/2026, 11:00:32 PM
class Solution {
public:
    int countDigits(int num) {
        int ans=0;
        string s=to_string(num);
        for(char& c:s){
            int n=c-'0';
            if(num%n==0)    ans++;
        }
        return ans;
    }
};