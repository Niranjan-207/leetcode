// Last updated: 4/4/2026, 10:59:08 PM
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();

        int c=2;
        int ans=2;
        for(int i=2;i<n;i++){
            if(nums[i]==nums[i-1]+nums[i-2]){
                c++;
            }else{
                c=2;
            }
            ans=max(ans,c);
        }
        return ans;
    }
};