// Last updated: 4/4/2026, 10:58:49 PM
class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i=num1;i<=num2;i++){
            
            string s=to_string(i);
                if(s.length()<3) continue;
            for(int i=1;i<s.length()-1;i++){
                int l=s[i-1]-'0';
                int m=s[i]-'0';
                int r=s[i+1]-'0';

                    if(m>l && m>r) ans++;
                    if(m<l && m<r) ans++;
            }
            
        }
        return ans;
    }
};