// Last updated: 4/4/2026, 11:00:05 PM
class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int cnt=0;
        int temp=0;
        for(int& num:nums){
            temp+=num;
            if(temp==0) cnt++;
        }
        return cnt;
    }
};