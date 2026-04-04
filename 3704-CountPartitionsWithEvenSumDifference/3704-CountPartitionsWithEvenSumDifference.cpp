// Last updated: 4/4/2026, 10:59:41 PM
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0)-nums[0];
        int pre=nums[0],cnt=0,n=nums.size();
        for(int i=1;i<n;i++){
            if((sum-pre)%2==0)    cnt++;
            pre+=nums[i];
            sum-=nums[i];
        }
        return cnt;
    }
};