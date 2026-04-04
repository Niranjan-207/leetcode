// Last updated: 4/4/2026, 11:00:30 PM
class Solution {
    int pbs(vector<int> nums){
        int l=0;
        int h=nums.size()-1;
        int idx=-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]>0){
                idx=m;
                h=m-1;
            }else{
                l=m+1;
            }
        }
         //if(nums[idx]==0)    return 0;
        return idx;
    }

    int nbs(vector<int> nums){
        int l=0;int h=nums.size()-1;int idx=-1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]<0){
                idx=m;
                l=m+1;
            }else{
                h=m-1;
            }
        }
        //if(nums[idx]==0)    return 0;
        return idx;
    }
public:
    int maximumCount(vector<int>& nums) {
        int p=pbs(nums);
        int n=nbs(nums);
        int s=nums.size();
        int pc=(p==-1)?0:(s-p);
        int nc=(n==-1)?0:(n+1);
        return max(pc,nc);
    }
};