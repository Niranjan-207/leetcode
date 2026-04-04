// Last updated: 4/4/2026, 11:05:33 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        //vector<int> lr(n,1),rl(n,1);
        vector<int> ans(n,1);

        for(int i=1;i<n;i++){
            ans[i]=nums[i-1]*ans[i-1];
        }
        
        int pro=nums[n-1];
        for(int i=(n-2);i>=0;i--){
            ans[i]=ans[i]*pro;
            pro*=nums[i];
        }
        // vector<int> ans(n,1);
        // for(int i=0;i<n;i++){
        //    ans[i]=lr[i]*rl[i];
        // }
        return ans;

    }
};

// 1  1   2  6
// 24 12  4  1