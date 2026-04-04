// Last updated: 4/4/2026, 11:05:19 PM
class Solution {
public:
    string getHint(string secret, string guess) {
        int b=0,c=0;
        int cnt[10]={0};

        for(int i=0;i<secret.length();i++){
            int s=secret[i]-'0';
            int g=guess[i]-'0';

            if(s==g)    b++;
            else{
                if(cnt[s]<0)    c++;
                if(cnt[g]>0)    c++;
                cnt[g]--;
                cnt[s]++;
            }
        }
         return (to_string(b)+"A"+to_string(c)+"B");
    }
};