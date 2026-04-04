// Last updated: 4/4/2026, 11:04:48 PM
class Solution {
public:
    int arrangeCoins(int n) {
        int l=0;
        int r=n;
        //int steps=0;
        int ans=0;
        while(l<=r){
            int m=l+(r-l)/2;
            long long coins=(1ll*(m)*(m+1))/2;

            if(coins==n) return m;
            else if(coins<n){
                ans=m;
                l=m+1;
            }else{
                
                r=m-1;
            }

        }
        return ans;
    }
};