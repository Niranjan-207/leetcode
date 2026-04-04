// Last updated: 4/4/2026, 11:07:09 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int m=0;
        while(m<=h){
            int num=nums[m];
            if(num==0)    swap(nums[l++],nums[m++]);
            else if(num==2) swap(nums[h--],nums[m]);
            else    m++;
        }
    }
};