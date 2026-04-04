// Last updated: 4/4/2026, 11:04:45 PM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            while( nums[i] != nums[nums[i]-1] ){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<n;i++){
            if(i+1 != nums[i])  ans.push_back(i+1);
        }
        return ans;
    }
};