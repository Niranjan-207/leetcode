// Last updated: 4/4/2026, 11:05:05 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=1;
        int r=num;
        while(l<=r){
            int mid=l+(r-l)/2;
            long long ans=1ll*mid*mid;
            if(num==ans)    return true;
            else if(ans>num)    r=mid-1;
            else l=mid+1;
        }
        return false;
    }
};