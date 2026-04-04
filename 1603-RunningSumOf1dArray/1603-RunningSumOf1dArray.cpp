// Last updated: 4/4/2026, 11:02:01 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> run_sum(n);
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<i+1;j++){
                sum+=nums[j];
            }
            run_sum[i]=sum;
        }
        return run_sum;
    }
};