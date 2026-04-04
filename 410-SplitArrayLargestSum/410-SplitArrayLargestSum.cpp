// Last updated: 4/4/2026, 11:04:56 PM
class Solution {
public:
    bool check(vector<int>& nums,int mid, int k){
        int segs=1;
        int temp=0;
        for(int num:nums){
            if(temp+num > mid){
                temp=0;
                segs++;
            }
            temp+=num;
        }
        return segs<=k;
    }


    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(begin(nums),end(nums));
        int h=accumulate(begin(nums),end(nums),0);
        int ans=l;
        while(l<=h){
            int mid=l+(h-l)/2;
           
            if(check(nums,mid,k)){
                ans=mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};