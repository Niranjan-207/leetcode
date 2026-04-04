// Last updated: 4/4/2026, 10:58:45 PM
class Solution {
public:
    int minSwaps(vector<int>& nums, vector<int>& forbidden) {
        int n=nums.size();
        unordered_map<int,int> nc,fc;
        for(int num:nums) nc[num]++;
        for(int num:forbidden) fc[num]++;

        for(auto &[num,fre]:nc){
            if(fre>n-fc[num]){
                return -1;
            }
        }

        vector<int> bv;
        unordered_map<int,int> bvfre;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==forbidden[i]){
                bv.push_back(nums[i]);
                bvfre[nums[i]]++;
            }
        }
        if(bv.size()==0) return 0;

        int mfre=0;
        for(auto &[num,fre]:bvfre){
            mfre=max(mfre,fre);
        }

        int tbad=bv.size();
        return max(mfre,(tbad+1)/2);
    }
};