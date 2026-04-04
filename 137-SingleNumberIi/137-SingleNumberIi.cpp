// Last updated: 4/4/2026, 11:06:35 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num=0;

        for(int i=0;i<32;i++){
            int cnt=0;
            for(int num:nums){
                if(num>>i & 1)  cnt++;
            }
            num+=((cnt%3)*(1<<i));
        }
        return num;
    }
};