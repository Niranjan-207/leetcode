// Last updated: 4/4/2026, 10:58:19 PM
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return -1;

        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }

        int ans=INT_MAX;
        for(auto& idx:mp){
            auto& v=idx.second;
            if(v.size()<3) continue;
            for(int i=0;i+2<v.size();i++){
                int len=2*(v[i+2]-v[i]);
                ans=min(ans,len);
            }    
        }
            if(ans==INT_MAX) return -1;
        return ans;
    }
};