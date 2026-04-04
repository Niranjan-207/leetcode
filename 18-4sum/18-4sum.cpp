// Last updated: 4/4/2026, 11:07:56 PM
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1])   continue;
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1])   continue;
                long long find=1ll*target-1ll*nums[i]-1ll*nums[j];
                int l=j+1,r=n-1;
                while(l<r){
                    long long sum=nums[l]+nums[r];
                    if(sum>find)    r--;
                    else if(sum<find)   l++;
                    else{
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++;r--;
                        while(l<r && nums[l]==nums[l-1])    l++;
                        while(l<r && nums[r]==nums[r+1])    r--;
                    }
                }
            }
        }
        return ans;
    }
};