// Last updated: 4/4/2026, 10:59:12 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[0]){
                return 1;
            }
        }
        return 0;
    }
};