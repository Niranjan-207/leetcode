// Last updated: 4/4/2026, 11:05:22 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int p1=0,p2=0;
        while(p1<n){
            while(p1<n && nums[p1]==0)  p1++;
            if(p1<n){ swap(nums[p1],nums[p2]);p1++;p2++;}
            
        }
    }
};