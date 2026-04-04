// Last updated: 4/4/2026, 11:05:50 PM
class Solution {
public:
    int solve(vector<int> arr){
        int n=arr.size();
        vector<int> dp(n);
        dp[0]=arr[0];
        for(int i=1;i<n;i++){
            int take=arr[i];
            if(i>1) take+=dp[i-2];
            int notTake=dp[i-1];
            dp[i]=max(take,notTake);
        }
        return dp[n-1];
    }

    int rob(vector<int>& nums) {
        if(nums.size()==1)  return nums[0];
        vector<int> temp1(nums.begin()+1,nums.end());
        int l=solve(temp1);
        vector<int> temp2(nums.begin(),nums.end()-1);
        int r=solve(temp2);
        return max(l,r);
    }
};