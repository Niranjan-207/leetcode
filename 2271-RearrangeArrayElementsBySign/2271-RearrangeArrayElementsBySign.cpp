// Last updated: 4/4/2026, 11:01:01 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p,ne;
        for(int& num:nums){
            if(num>=0)   p.push_back(num);
            else    ne.push_back(num);
        }
        int k=0;
        for(int i=0;i<nums.size();i+=2){
            nums[i]=p[k];
            nums[i+1]=ne[k++];
        }
        return nums;
    }
};