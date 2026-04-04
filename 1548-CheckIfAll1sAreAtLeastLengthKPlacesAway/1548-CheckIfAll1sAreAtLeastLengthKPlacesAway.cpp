// Last updated: 4/4/2026, 11:02:13 PM
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prev=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                if(prev==-1){
                    prev=i;
                }
                else if(prev!=-1 && i-prev-1>=k){
                    prev=i;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};