// Last updated: 4/4/2026, 11:00:04 PM
class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]+nums[1] <= nums[2])   return "none";

        set<int> se={nums[0],nums[1],nums[2]};
        if(se.size()==1)    return "equilateral";
        else if(se.size()==2)   return "isosceles";
        return "scalene";
    }
};