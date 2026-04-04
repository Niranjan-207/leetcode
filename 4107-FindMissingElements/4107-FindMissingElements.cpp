// Last updated: 4/4/2026, 10:58:24 PM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> arr;
        set<int> se;
        for(int i=0;i<nums.size();i++){
            se.insert(nums[i]);
        }
        sort(nums.begin(),nums.end());
        int st=nums[0];
        int end=nums[nums.size()-1];
        for(int i=st;i<=end;i++){
            if(se.find(i)==se.end())    arr.push_back(i);
        }
        return arr;
    }
};