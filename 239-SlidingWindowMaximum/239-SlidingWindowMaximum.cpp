// Last updated: 4/4/2026, 11:05:32 PM
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        vector<int> ans;
        map<int,int> mp;
        int ma=INT_MIN;
        for(int r=0;r<nums.size();r++){
            mp[nums[r]]++;
            if(r<k){
                ma=max(ma,nums[r]);
                if(r==(k-1))    ans.push_back(ma);
                continue;
            }
            mp[nums[r-k]]--;
            if(mp[nums[r-k]]==0){
                mp.erase(nums[r-k]);
            }
            auto it=mp.rbegin();
            ma=it->first;
            ans.push_back(ma);
        }
        return ans;
    }
};