// Last updated: 4/4/2026, 11:00:13 PM
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
      
        sort(nums.begin(), nums.end());
        vector <int> arr;
        int i= 0;
        while (i+1<nums.size()){
            arr.push_back(nums[i+1]);
            arr.push_back(nums[i]);
            i+=2;
        }
        return arr;
        
    }
};