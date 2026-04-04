// Last updated: 4/4/2026, 10:58:36 PM
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> se;
        for(int num:nums){
            if(num%k==0){
                se.insert(num);
            }
        }

        for(int i=k;;i+=k){
            if(se.find(i)==se.end()){
                return i;
            }
        }
        return -1;
    }
};