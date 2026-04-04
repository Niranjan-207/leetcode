// Last updated: 4/4/2026, 10:58:37 PM
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> ans;
        for(long long num:nums){
            ans.push_back(num*num);
        }

        sort(ans.rbegin(),ans.rend());
        long long sum=0;
        int st=(nums.size()+1)/2;
        for(int i=0;i<st;i++){
            sum+=ans[i];
        }
        for(int i=st;i<nums.size();i++){
            sum-=ans[i];
        }
        return sum;
    }
};