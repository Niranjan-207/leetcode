// Last updated: 4/4/2026, 10:58:35 PM
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
            if(9*num < sum ) return "";
        string ans="";
        for(int i=0;i<num;i++){
            int dig=min(sum,9);
            ans+=(dig+'0');
            sum-=dig;
        }
        return ans;
    }
};