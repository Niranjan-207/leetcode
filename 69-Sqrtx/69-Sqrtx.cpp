// Last updated: 4/4/2026, 11:07:15 PM
class Solution {
public:
    int mySqrt(int x) {
        int l=0;
        int h=x;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            long long a=1ll*mid*mid;
            if(a==x)  return mid;
            else if(a<x){
                ans=mid;
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return ans;
    }
};