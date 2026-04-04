// Last updated: 4/4/2026, 10:59:42 PM
class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n=nums.size()-1;
        int count=0;
        for(int i=0;i<=(n-2);i++){
            // for(int j=i;j<3;j++){
            //     if(nums[j]+nums[j+2]==(nums[j+1]/2))
            //         count++;
            // }
            if(2*(nums[i]+nums[i+2])==(nums[i+1]))
                count++;
        }
        return count;
    }
};