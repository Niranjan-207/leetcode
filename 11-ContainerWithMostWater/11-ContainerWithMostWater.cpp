// Last updated: 6/30/2026, 1:19:52 AM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int l=0,r=height.size()-1;
5
6        int ans=0;
7        while(l<r){
8            ans=max(ans,(r-l)*min(height[l],height[r]));
9            if(height[l]<height[r]) l++;
10            else    r--;
11        }
12        return ans;
13    }
14};