// Last updated: 4/4/2026, 11:01:18 PM
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1)    return 0;

        sort(nums.begin(),nums.end());
        int dif=nums[k-1]-nums[0];
        for(int i=1;i+k<=nums.size();i++){
            dif=min(dif,nums[i+k-1]-nums[i]);
        }
        return dif;
    }
};