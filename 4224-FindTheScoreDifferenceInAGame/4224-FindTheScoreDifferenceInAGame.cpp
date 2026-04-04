// Last updated: 4/4/2026, 10:57:32 PM
class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int p1=0,p2=0;
        int n=nums.size();
        bool p1active = true;
        for(int i=0;i<n;i++){
            //if()
            if(nums[i]&1){
                p1active=!p1active;
            }
            if(((i+1) % 6 )==0){
                p1active=!p1active;
            }
            if(p1active) p1+=nums[i];
            else p2+=nums[i];
        }
        return p1-p2;
    }
};