// Last updated: 4/4/2026, 11:02:37 PM
class Solution {
public:
    bool possible(vector<int>& nums,int k, int threshold){
        int cnt=0;
        for(int num:nums){
            cnt+=(num+k-1)/k;
        }
        return cnt<=threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int r=*max_element(begin(nums),end(nums));

        while(l<r){
            int mid=l+(r-l)/2;
            if(possible(nums,mid,threshold)){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};