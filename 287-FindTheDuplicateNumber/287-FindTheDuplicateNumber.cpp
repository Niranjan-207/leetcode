// Last updated: 4/4/2026, 11:05:21 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        int n=nums.size();
        for(int& num:nums){
            if(s.find(num)!=s.end())    return num;
            s.insert(num);
        }
        return -1;
    }
};