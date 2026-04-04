// Last updated: 4/4/2026, 11:07:35 PM
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();

        for(int i=0;i<n;i++){

            int x=nums[i];
            while(x>=1 && x<=n && x!=i+1 && nums[x-1]!=x){
                swap(nums[x-1],nums[i]);
                x=nums[i];
            }
        }

        for(int i=0;i<n;i++){
            if(nums[i]==i+1)    continue;
            return i+1;
        }

        return n+1;
    }
};