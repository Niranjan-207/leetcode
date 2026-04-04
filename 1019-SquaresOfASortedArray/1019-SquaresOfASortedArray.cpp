// Last updated: 4/4/2026, 11:03:13 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);

        int l=0,r=n-1;
        int idx=n-1;

        while(l<=r){
            int left=nums[l]*nums[l];
            int right=nums[r]*nums[r];

            if(left>right){
                ans[idx--]=left;
                l++;
            }else{
                ans[idx--]=right;
                r--;
            }
        }
        return ans;
    }
};