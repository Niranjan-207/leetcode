// Last updated: 4/4/2026, 10:57:20 PM
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
         int o=0,e=0,n=nums1.size();
        for(int num:nums1){
            if(num%2==0) e++;
            else o++;
        }
        if(o==n || e==n) return true;
        
        int mi=*min_element(begin(nums1),end(nums1));
        return (mi%2!=0);
    }
};