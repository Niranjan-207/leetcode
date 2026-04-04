// Last updated: 4/4/2026, 11:02:19 PM
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(index[j]>=index[i]){
                    index[j]++;
                }
            }
        }
        vector<int> target(n);
        for(int i=0;i<n;i++){
            target[index[i]]=nums[i];
        }
        return target;
    }
};