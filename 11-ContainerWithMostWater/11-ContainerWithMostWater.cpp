// Last updated: 4/4/2026, 11:08:01 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN;
        int l=0,r=height.size()-1;
        while(l<r){
            ans=max(ans,(r-l)*min(height[l],height[r]));
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};