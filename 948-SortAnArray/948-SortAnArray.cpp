// Last updated: 4/4/2026, 11:03:25 PM
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> temp(nums.size());
        int n=nums.size();
        
        for(int width=1;width<n;width*=2){
            for(int i=0;i<n;i+=(2*width)){
                int left=i;
                int mid=min(i+width-1,n-1);
                int right=min(i+(2*width)-1,n-1);

                int l=left,r=mid+1,k=left;
                while(l<=mid && r<=right){
                    if(nums[l]<=nums[r])    temp[k++]=nums[l++];
                    else    temp[k++]=nums[r++];
                }
                while(l<=mid)   temp[k++]=nums[l++];
                while(r<=right) temp[k++]=nums[r++];

                for(int z=left;z<=right;z++){
                    nums[z]=temp[z];
                }
            }
        }
        return nums;
    }
};