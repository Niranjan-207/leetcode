// Last updated: 4/4/2026, 10:59:54 PM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        for(int num:nums){
            if(num%3!=0)    cnt++;
            
        }
        return cnt;
    }
};