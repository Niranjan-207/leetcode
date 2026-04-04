// Last updated: 4/4/2026, 11:00:09 PM
class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int cnt=0;
        for(int num:nums){
            if((num&1)==0)  cnt++;
        }

        return (cnt>=2);
    }
};