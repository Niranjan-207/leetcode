// Last updated: 4/4/2026, 11:07:59 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])   continue;
            //if(nums[i]=)
            //int target=-1*nums[i];
            int l=i+1,r=n-1;
            while(l<r){
                int sum=nums[l]+nums[r]+nums[i];
                if(sum>0)  r--;
                else if(sum<0) l++;
                else{
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;r--;
                    while(l<r && nums[l]==nums[l-1])    l++;
                    while(l<r && nums[r]==nums[r+1])    r--;
                }
            }
        }
        return ans;
    }
};