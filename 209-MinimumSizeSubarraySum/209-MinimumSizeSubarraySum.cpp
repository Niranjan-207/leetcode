// Last updated: 4/4/2026, 11:05:53 PM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len=INT_MAX,n=nums.size();
        long long sum=0;
        int l=0;

        for(int r=0;r<n;r++){
            sum+=nums[r];
            while(l<n && ((sum-nums[l])>=target)){
                sum-=nums[l];
                l++;
            }
            if (sum>=target)
                len=min(len,r-l+1);
        }
        if(len==INT_MAX)    return 0;   
        return len;
    }
};