// Last updated: 4/4/2026, 10:58:28 PM
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> l(n,1);
        vector<int> r(n,1);
        for(int i=1;i<n;i++){
            if(nums[i]>=nums[i-1]){
                l[i]=l[i-1]+1;
            }
        }

        for(int i=n-2;i>=0;i--){
            if(nums[i+1]>=nums[i]){
                r[i]=r[i+1]+1;
            }
        }
        int ans=*max_element(l.begin(),l.end());
        for(int i=0;i<n;i++){

            if(i>0){
                int newll=l[i-1]+1;
                ans=max(ans,newll);
            }

            if(i<n-1){
                int newrl=r[i+1]+1;
                ans=max(ans,newrl);
            }

            if(i>0 && i<n-1){
                if(nums[i-1]<=nums[i+1]){
                    int newl=l[i-1]+1+r[i+1];
                    ans=max(ans,newl);
                }
            }
            
        }
        return ans;
    }
};