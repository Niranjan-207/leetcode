// Last updated: 4/4/2026, 10:59:13 PM
class Solution {
public:
    int maxXorSubsequences(vector<int>& nums) {
        vector<int> ans;
        for(int num:nums){
            int a=num;
            for(int b:ans){
                a=min(a,a^b);
            }
            if(a){
                ans.push_back(a);
                sort(ans.rbegin(),ans.rend());
            }
        }

        int imp=0;
         for(int b:ans){
             imp=max(imp,imp^b);
         }   
        return imp;
    }

};