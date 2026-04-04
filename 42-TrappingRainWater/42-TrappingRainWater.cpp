// Last updated: 4/4/2026, 11:07:34 PM
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),ans=0;
        int l=0,r=n-1;
        int lm=0,rm=0;
        while(l<r){
            lm=max(height[l],lm);
            rm=max(height[r],rm);
            if(lm<rm){
                ans+=(lm-height[l]);
                l++;
            }else{
                ans+=(rm-height[r]);
                r--;
            }
        }
        return ans;
    }
};