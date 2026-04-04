// Last updated: 4/4/2026, 11:00:26 PM
class Solution {
public:
    void solve(vector<int>& nums,int idx,long long temp,long long& ans,bool taken){
        if(idx==nums.size()){
            if(taken) ans=max(ans,(long long)temp);
            return;
        }

        solve(nums,idx+1,temp*nums[idx],ans,true);
        solve(nums,idx+1,temp,ans,taken);
    }

    long long maxStrength(vector<int>& nums) {
        long long ans=LLONG_MIN;
        solve(nums,0,1,ans,false);
        return ans;
    }
};