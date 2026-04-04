// Last updated: 4/4/2026, 11:06:14 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num=nums[0];
        int cnt=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==num){
                cnt++;
            }else if(nums[i]!=num && cnt>0){
                cnt--;
            }else{
                num=nums[i];
                cnt++;
            }
        }
        return num;
    }
};