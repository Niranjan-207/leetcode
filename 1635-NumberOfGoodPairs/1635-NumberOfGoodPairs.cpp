// Last updated: 4/4/2026, 11:01:59 PM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int target=nums[i];
            for(int j=0;j<i;j++){
                if(i!=j && nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};