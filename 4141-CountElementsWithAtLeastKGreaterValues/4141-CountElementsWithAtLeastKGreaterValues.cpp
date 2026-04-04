// Last updated: 4/4/2026, 10:58:09 PM
class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int i=0;
        int n=nums.size();
        while(i<n){
            int j=i+1;
            while(j<n && nums[j]==nums[i]){
                j++;
            }
            int fre=j-i;
            int gre=n-j;
            if(gre>=k)ans+=fre;
            i=j;
        }
        return ans;
    }
};