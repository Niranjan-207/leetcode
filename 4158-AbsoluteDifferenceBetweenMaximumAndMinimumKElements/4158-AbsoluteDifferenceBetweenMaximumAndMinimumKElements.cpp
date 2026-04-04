// Last updated: 4/4/2026, 10:58:02 PM
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int msum=0;
        for(int i=0;i<k;i++){
            msum+=nums[i];
        }
        int masum=0;
        sort(nums.rbegin(),nums.rend());
        for(int i=0;i<k;i++){
            masum+=nums[i];
        }
        return abs(msum-masum);
    }
};