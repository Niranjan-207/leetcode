// Last updated: 4/4/2026, 11:00:37 PM
class Solution {
public:
    int averageValue(vector<int>& nums) {
        if(nums.size()==0)  return 0;
        int n=nums.size();
        int sum=0,cnt=0;
        for(int& num:nums){
            if(num%6==0){
                sum+=num;
                cnt++;
            }
        }
        if(cnt!=0)  return (sum/cnt);
        return 0;
    }
};