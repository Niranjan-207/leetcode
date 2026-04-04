// Last updated: 4/4/2026, 10:58:39 PM
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            unordered_map<int,int> mp;  
            
            for(int j=i;j<n;j++){
                mp[nums[j]]++;
                if(mp.find(target)!=mp.end())
                    if(mp[target]>(j-i+1)/2) ans++;
            }
        }
        return ans;
    }
};