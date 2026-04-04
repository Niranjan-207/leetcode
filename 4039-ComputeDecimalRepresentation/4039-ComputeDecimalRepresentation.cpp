// Last updated: 4/4/2026, 10:58:59 PM
class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        long long base=1;
        while(n>0){
            int dig=n%10;
            if(dig!=0) ans.push_back(dig*base);
            base*=10;
            n/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};