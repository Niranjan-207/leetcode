// Last updated: 4/4/2026, 10:59:51 PM
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        if((n==1 && k==1) || k==1)    return nums;
        vector<int> ans;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]+1 == nums[i]){
                cnt++;
            }else{
                cnt=1;
            }

            if(i>=(k-1)){
                if(cnt>=k)  ans.push_back(nums[i]);
                else    ans.push_back(-1);
            }
        }
        return ans;
    }
};