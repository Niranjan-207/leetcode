// Last updated: 4/4/2026, 11:02:10 PM
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.length();
        int need=1<<k;
        int mask=need-1;

        int num=0;
        vector<bool> seen(need,false);
        int cnt=0;

        for(int i=0;i<n;i++){
            num=((num<<1)&mask)|(s[i]-'0');

            if(i>=(k-1) && !seen[num]){
                seen[num]=true;
                cnt++;
                if(cnt==need)   return true;
            }
        }
        return false;
    }
};