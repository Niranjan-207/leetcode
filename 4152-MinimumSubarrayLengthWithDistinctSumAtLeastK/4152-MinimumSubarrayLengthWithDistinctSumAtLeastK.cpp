// Last updated: 4/4/2026, 10:58:05 PM
class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        long long ds=0;
        int l=0;int ans=INT_MAX;

        for(int r=0;r<nums.size();r++){
            if(mp[nums[r]]==0){
                ds+=nums[r];
                
            }
            mp[nums[r]]++;

            while(ds>=k){
                ans=min(ans,r-l+1);

                mp[nums[l]]--;
                if(mp[nums[l]]==0)
                    ds-=nums[l];
                l++;   
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;

        
    }
};