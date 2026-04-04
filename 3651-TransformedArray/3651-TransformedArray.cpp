// Last updated: 4/4/2026, 10:59:47 PM
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        for(int i=0;i<n;i++){
            int move=nums[i];
            int index=(i+move)%n;
            if(index<0)
                index+=n;
            //nums[i]=(nums[(i+move)%n]);
            result[i]=nums[index];
        }
        return result;
    }
};