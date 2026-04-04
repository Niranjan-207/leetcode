// Last updated: 4/4/2026, 11:01:19 PM
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans="";
        for(int i=0;i<nums.size();i++){
            ans+=(nums[i][i]=='0'?'1':'0');
        }
        return ans;
    }
};