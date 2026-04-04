// Last updated: 4/4/2026, 10:58:54 PM
class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        set<int> ev,od;
        int n=nums.size(),ans=0;

        for(int i=0;i<n;i++){
            ev.clear();od.clear();
            for(int j=i;j<n;j++){
                if(nums[j]&1)   od.insert(nums[j]);
                else    ev.insert(nums[j]);
                if(od.size()==ev.size()){
                   
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};