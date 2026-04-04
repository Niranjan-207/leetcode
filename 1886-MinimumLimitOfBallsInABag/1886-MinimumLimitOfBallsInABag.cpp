// Last updated: 4/4/2026, 11:01:39 PM
class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int ans=0;
        int l=1;
        int h=*max_element(begin(nums),end(nums));
        while(l<=h){
            int mid=l+(h-l)/2;
            long long op=0;
            for(int num:nums){
                op+=((num-1)/mid);
            }
            if(op>maxOperations){
                l=mid+1;
            }else{
                ans=mid;
                h=mid-1;
            }
        }
        return ans;
    }
};