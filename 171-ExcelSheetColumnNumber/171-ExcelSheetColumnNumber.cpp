// Last updated: 4/4/2026, 11:06:13 PM
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        long long mul=1;
        int n=columnTitle.length();
        for(int i=n-1;i>=0;i--){
            int temp=(columnTitle[i])-64;
            ans=ans+(temp*mul);
            mul*=26;
        }
        return ans;
    }
};