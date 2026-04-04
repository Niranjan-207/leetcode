// Last updated: 4/4/2026, 11:02:20 PM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> cnt(101,0);
        int n=nums.size();
        for(int num:nums){
            cnt[num]++;
        }
        for(int i=1;i<=100;i++){
            cnt[i]=cnt[i]+cnt[i-1];
        }
        vector<int> ans;
        for(int num:nums){
            if(num==0)  ans.push_back(0);
            else ans.push_back(cnt[num-1]);
        }
        return ans;
    }
};