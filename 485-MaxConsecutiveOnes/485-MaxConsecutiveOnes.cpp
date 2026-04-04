// Last updated: 4/4/2026, 11:04:40 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int cnt=0;
        for(int num:nums){
            if(num==1){
                cnt++;
            }else{
                ans=max(ans,cnt);
                cnt=0;
            }
        }
        ans=max(ans,cnt);
        return ans;
    }
};