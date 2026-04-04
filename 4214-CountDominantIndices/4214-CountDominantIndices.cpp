// Last updated: 4/4/2026, 10:57:37 PM
class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int total=0;
            int idx=0;
            for(int j=i+1;j<n;j++){
                total+=nums[j];
                idx++;
            }
                if(nums[i]*(n-i-1)>total)cnt++;
        }
        return cnt;
    }
};