// Last updated: 4/4/2026, 11:03:26 PM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int p1=0,p2=nums.size()-1,n=nums.size();
        while(p1<p2){
            while(p1<n && nums[p1]%2==0)   p1++;
            while(p2>0 && nums[p2]%2!=0)  p2--;
            if(p1<p2){
                swap(nums[p1],nums[p2]);
                p1++;
                p2--;
            }
        }
        return nums;
    }
};