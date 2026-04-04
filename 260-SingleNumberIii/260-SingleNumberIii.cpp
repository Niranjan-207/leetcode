// Last updated: 4/4/2026, 11:05:26 PM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        for(int& num:nums){
            x^=num;
        }

        int bit=0;
        for(int i=0;i<32;i++){
            if(x>>i &1){
                bit=i;
                break;
            }
        }
        int n1=0,n2=0;

        for(int& num:nums){
            if(num>>bit & 1){
                n1^=num;
            }else{
                n2^=num;
            }
        }
        return {n1,n2};
    }
};