// Last updated: 4/4/2026, 10:57:17 PM
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int o=0,e=0,n=nums1.size();
        for(int num:nums1){
            if(num%2==0) e++;
            else o++;
        }
        if(o==n || e==n) return true;
        if((o!=n && e!=0) || (e!=n && o!=0)) return true;
        return false;
    }
};