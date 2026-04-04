// Last updated: 4/4/2026, 10:58:20 PM
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int num=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
           ans+=(num-nums[i]);
        }
        return ans;
    }
};