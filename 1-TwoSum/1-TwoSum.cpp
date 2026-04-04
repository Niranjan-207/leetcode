// Last updated: 4/4/2026, 11:08:08 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans(2);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int req=target-nums[i];
            if(mp.find(req)!=mp.end()){
                ans[0]=mp[req];
                ans[1]=i;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};